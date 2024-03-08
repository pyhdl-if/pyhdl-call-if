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
    import pyhdl_pi_if::*;


    class PyObjectW;
    endclass

    `include "pyhdl_call_if_dpi.svh"
    `include "PyObjectWrapper.svh"

    function automatic PyObject pyhdl_mkTuple(PyObject objs[$]);
        PyObject t = PyTuple_New(objs.size());
        foreach (objs[i]) begin
            void'(PyTuple_SetItem(t, i, objs[i]));
        end
        return t;
    endfunction

    bit is_init = init_pkg();
    PyObject hdl_call_if;

    function PyObject pyhdl_call_if_invoke_hdl_f(
        PyObject        obj,
        string          method_name,
        PyObject        args);
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


    function automatic bit init_pkg();
        PyObject __sv_init = null;

        Py_Initialize();

        // Register ourselves with the Python side
        $display("init_pkg");        
        hdl_call_if = PyImport_ImportModule("hdl_call_if");
        if (hdl_call_if == null) begin
            $display("Internal Error: Failed to find Python package hdl_call_if");
            $finish;
        end
        $display("hdl_call_if=%0p", hdl_call_if);
        __sv_init = PyObject_GetAttrString(hdl_call_if, "__sv_init");
        if (__sv_init == null) begin
            $display("Internal Error: Failed to find __sv_init method");
            $finish;
        end
        begin
            PyObject args = PyTuple_New(0);
            void'(PyObject_Call(__sv_init, args, null));
        end

    endfunction

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

    function automatic void pyhdl_queue_runnable(PyObject obj);
        $display("pyhdl_queue_runnable");
        void'(invoke_q.try_put(obj));
    endfunction
    export "DPI-C" function pyhdl_queue_runnable;

    import "DPI-C" function longint unsigned svGetScope();
    function automatic longint unsigned svGetCallerScope();
        longint unsigned caller_s = svGetScope();
        return caller_s;
    endfunction
    export "DPI-C" function svGetCallerScope;
        

    function void pyhdl_start();
        fork
            pyhdl_call_if_run();
        join_none
    endfunction

endpackage

