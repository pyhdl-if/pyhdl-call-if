/**
 * hdl_call_if.sv
 *
 * Copyright 2024 Matthew Ballance and Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may 
 * not use this file except in compliance with the License.  
 * You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  
 * See the License for the specific language governing permissions and 
 * limitations under the License.
 *
 * Created on:
 *     Author: 
 */
package pyhdl_call_if;
    import pyhdl_dpi_if::*;


    class PyObjectW;
    endclass

    class PyHdlCallEmpty;
    endclass

    interface class PyHdlCallApiIF;
        pure virtual function PyObject invokeFunc(
            string      method,
            PyObject    args);
    endclass

    class PyHdlCallApiBase #(type BASE_T=PyHdlCallEmpty) extends BASE_T;
        PyObject                m_obj;
    endclass

    class PyHdlCallApiUVMBase #(type BASE_T=PyHdlCallEmpty) extends BASE_T;
        PyObject                m_obj;

        function new(string name="");
            super.new(name);
        endfunction
    endclass

    `include "PyObjectWrapper.svh"

    import "DPI-C" context function longint unsigned svGetScope();

    function automatic PyObject pyhdl_mkTuple(PyObject objs[$]);
        PyObject t = PyTuple_New(objs.size());
        foreach (objs[i]) begin
            void'(PyTuple_SetItem(t, i, objs[i]));
        end
        return t;
    endfunction

    bit is_init = init_pkg();
    PyObject __hdl_call_if;
    PyObject            __ep_h;
    PyHdlCallApiIF      __objects[];
    semaphore           __callsem[];
    PyObject            __callsem_res[];

    function PyObject pyhdl_call_if_invoke_hdl_f(
        int             obj_id,
        string          method_name,
        PyObject        args);
        PyObject ret;
        $display("pyhdl_call_if_invoke_hdl_f");
        ret = __objects[obj_id].invokeFunc(method_name, args);

        return ret;
    endfunction
    export "DPI-C" function pyhdl_call_if_invoke_hdl_f;

    function int pyhdl_call_if_invoke_hdl_t(
        PyObject        obj,
        string          method_name,
        PyObject        args);
    endfunction
    export "DPI-C" function pyhdl_call_if_invoke_hdl_t;

    function void pyhdl_call_if_response_py_t(
        PyObject        obj,
        int             call_id,
        PyObject        result);
    endfunction
    export "DPI-C" function pyhdl_call_if_response_py_t;

    task automatic pyhdl_call_if_invokePyTask(
        output PyObject     res,
        input PyObject      obj,
        input string        method,
        input PyObject      args);
        int sem_id = pyhdl_call_if_allocSem();
        PyObject proxy_h = PyObject_GetAttrString(obj, "__proxy");
        PyObject invoke_py_t = PyObject_GetAttrString(proxy_h, "invoke_py_t");
        PyObject proxy_args = PyTuple_New(3);

        PyTuple_SetItem(proxy_args, 0, PyLong_FromLong(sem_id));
        PyTuple_SetItem(proxy_args, 1, PyUnicode_FromString(method));
        PyTuple_SetItem(proxy_args, 2, args);
        
        PyObject_Call(invoke_py_t, proxy_args, null);
    endtask


    function automatic bit init_pkg();
        PyObject __sv_init = null;
        PyObject res;

        Py_Initialize();

        // Register ourselves with the Python side
        $display("init_pkg");        
        __hdl_call_if = PyImport_ImportModule("hdl_call_if");
        if (__hdl_call_if == null) begin
            $display("Internal Error: Failed to find Python package hdl_call_if");
            $finish;
        end
        $display("hdl_call_if=%0p", __hdl_call_if);
        __sv_init = PyObject_GetAttrString(__hdl_call_if, "__sv_init");
        if (__sv_init == null) begin
            $display("Internal Error: Failed to find __sv_init method");
            $finish;
        end
        Py_IncRef(__sv_init);
        begin
            PyObject args = PyTuple_New(1);
            PyObject scope = PyLong_FromUnsignedLongLong(svGetScope());
            int ret;

            $display("__sv_init: %p", __sv_init);
            $display("args: %p", args);
            $display("scope: %p", scope);
//            Py_IncRef(args);
            Py_IncRef(scope);
            ret = PyTuple_SetItem(args, 0, scope);
            $display("ret: %d", ret);
            res = PyObject_Call(__sv_init, args, null);
//            res = PyObject_CallOneArg(__sv_init, scope);
//            res = PyObject_CallObject(__sv_init, args);

            if (res == null) begin
                $display("Internal Error: Failed to run __sv_init");
                $finish;
            end
            __ep_h = res;
        end
        return 1;
    endfunction

    bit __thread_running = 0;
    mailbox #(PyObject)         invoke_q = new();
    task automatic pyhdl_call_if_run();
        PyObject obj, null_t, res;
        null_t = PyTuple_New(0);

        forever begin
            automatic PyObject obj_t;
            $display("--> get");
            invoke_q.get(obj);
            $display("<-- get");
            obj_t = obj;

            fork
                begin
                    res = PyObject_Call(obj_t, null_t, null);
                    $display("res: %0p", res);
                end
            join_none
        end
    endtask

    function automatic void pyhdl_call_if_queue_runnable(PyObject obj);
        $display("pyhdl_queue_runnable");

        if (!__thread_running && $time > 0) begin
            $display("PyHDL-Call_IF Fatal Error: SV event loop not running at time %0t", $time);
            $finish;
        end
        void'(invoke_q.try_put(obj));
    endfunction
    export "DPI-C" function pyhdl_call_if_queue_runnable;

    function void pyhdl_call_if_start();
        if (!__thread_running) begin
            __thread_running = 1;
            fork
                pyhdl_call_if_run();
            join_none
        end
    endfunction


    function automatic int allocObjId(PyHdlCallApiIF sv_api_if);
        int ret = -1, i;
        // if (__objects.size() == 0) begin
        //     __objects = new[64];
        // end

        for (i=0; i<__objects.size(); i++) begin
            if (__objects[i] == null) begin
                ret = i;
                break;
            end
        end

        if (ret == -1) begin
            __objects = new[__objects.size()+64](__objects);
            ret = i;
        end

        __objects[ret] = sv_api_if;
    endfunction

    function automatic int pyhdl_call_if_allocSem();
        int ret = -1, i;

        for (i=0; i<__callsem_res.size(); i++) begin
            if (__callsem_res[i] == null) begin
                ret = i;
                break;
            end
        end

        if (ret == -1) begin
            __callsem = new[__callsem.size()+64](__callsem);
            __callsem_res = new[__callsem_res.size()+64](__callsem_res);
            ret = i;
        end

        __callsem_res[ret] = None;

        return ret;
    endfunction

    task automatic pyhdl_call_if_waitSem(
        input int           id,
        output PyObject     res);
        __callsem[id].get();
        res = __callsem_res[id];
    endtask

    function automatic pyhdl_call_if_setSem(
        input int           id,
        input PyObject      res);
        __callsem_res[id] = res;
        __callsem[id].put(1);
    endfunction

    function automatic PyObject pyhdl_call_if_new(
        PyObject        cls_t,
        PyHdlCallApiIF  sv_api_if,
        PyObject        init_args);
        PyObject new_obj = PyObject_GetAttrString(__ep_h, "new_obj");
        PyObject args = PyTuple_New(3);
        PyObject ret;
        int obj_id = (sv_api_if != null)?allocObjId(sv_api_if):-1;

        $display("new_obj: %p", new_obj);

        Py_IncRef(new_obj);
        
        PyTuple_SetItem(args, 0, cls_t);
        PyTuple_SetItem(args, 1, PyLong_FromLong(obj_id));
        PyTuple_SetItem(args, 2, init_args);

        ret = PyObject_Call(new_obj, args, null);

        Py_DecRef(new_obj);

        return ret;
    endfunction

endpackage

