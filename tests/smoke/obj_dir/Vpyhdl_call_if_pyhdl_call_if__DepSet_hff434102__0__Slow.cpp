// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if_pyhdl_call_if.h"

void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_Py_Initialize_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyImport_ImportModule_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, std::string name, QData/*63:0*/ &PyImport_ImportModule__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_GetAttrString_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ base, std::string attr, QData/*63:0*/ &PyObject_GetAttrString__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_New_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ sz, QData/*63:0*/ &PyTuple_New__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_Call_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ target, QData/*63:0*/ args, QData/*63:0*/ kwargs, QData/*63:0*/ &PyObject_Call__Vfuncrtn);

VL_ATTR_COLD void Vpyhdl_call_if_pyhdl_call_if___eval_static__TOP__pyhdl_call_if(Vpyhdl_call_if_pyhdl_call_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if___eval_static__TOP__pyhdl_call_if\n"); );
    // Init
    QData/*63:0*/ __PVT__hdl_call_if;
    __PVT__hdl_call_if = 0;
    QData/*63:0*/ __Vfunc_init_pkg__0__unnamedblk1__DOT__args;
    __Vfunc_init_pkg__0__unnamedblk1__DOT__args = 0;
    QData/*63:0*/ __Vfunc_init_pkg__0_____05Fsv_init;
    __Vfunc_init_pkg__0_____05Fsv_init = 0;
    QData/*63:0*/ __Vfunc_PyImport_ImportModule__2__Vfuncout;
    __Vfunc_PyImport_ImportModule__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_PyObject_GetAttrString__3__Vfuncout;
    __Vfunc_PyObject_GetAttrString__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_PyTuple_New__4__Vfuncout;
    __Vfunc_PyTuple_New__4__Vfuncout = 0;
    QData/*63:0*/ __Vtask_PyObject_Call__5__Vfuncout;
    __Vtask_PyObject_Call__5__Vfuncout = 0;
    // Body
    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_Py_Initialize_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                                "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x29U);
    VL_WRITEF("init_pkg\n");
    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyImport_ImportModule_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                                "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x2dU, 
                                                                                std::string{"hdl_call_if"}, __Vfunc_PyImport_ImportModule__2__Vfuncout);
    __PVT__hdl_call_if = __Vfunc_PyImport_ImportModule__2__Vfuncout;
    if (VL_UNLIKELY((0ULL == __PVT__hdl_call_if))) {
        VL_WRITEF("Internal Error: Failed to find Python package hdl_call_if\n");
        VL_FINISH_MT("../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 48, "");
    }
    VL_WRITEF("hdl_call_if='h%0x\n",64,__PVT__hdl_call_if);
    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_GetAttrString_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                                "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x33U, __PVT__hdl_call_if, 
                                                                                std::string{"__sv_init"}, __Vfunc_PyObject_GetAttrString__3__Vfuncout);
    __Vfunc_init_pkg__0_____05Fsv_init = __Vfunc_PyObject_GetAttrString__3__Vfuncout;
    if (VL_UNLIKELY((0ULL == __Vfunc_init_pkg__0_____05Fsv_init))) {
        VL_WRITEF("Internal Error: Failed to find __sv_init method\n");
        VL_FINISH_MT("../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 54, "");
    }
    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_New_TOP__pyhdl_call_if(
                                                                              (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                              "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x39U, 0U, __Vfunc_PyTuple_New__4__Vfuncout);
    __Vfunc_init_pkg__0__unnamedblk1__DOT__args = __Vfunc_PyTuple_New__4__Vfuncout;
    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_Call_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                                "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x3aU, __Vfunc_init_pkg__0_____05Fsv_init, __Vfunc_init_pkg__0__unnamedblk1__DOT__args, 0ULL, __Vtask_PyObject_Call__5__Vfuncout);
}
