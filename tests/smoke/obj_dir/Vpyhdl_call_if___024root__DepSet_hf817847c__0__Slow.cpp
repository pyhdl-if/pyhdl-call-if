// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if___024root.h"

VL_ATTR_COLD void Vpyhdl_call_if_pyhdl_call_if___eval_static__TOP__pyhdl_call_if(Vpyhdl_call_if_pyhdl_call_if* vlSelf);

VL_ATTR_COLD void Vpyhdl_call_if___024root___eval_static(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_static\n"); );
    // Body
    Vpyhdl_call_if_pyhdl_call_if___eval_static__TOP__pyhdl_call_if((&vlSymsp->TOP__pyhdl_call_if));
}

void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyImport_ImportModule_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, std::string name, QData/*63:0*/ &PyImport_ImportModule__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_GetAttrString_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ base, std::string attr, QData/*63:0*/ &PyObject_GetAttrString__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_Call_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ target, QData/*63:0*/ args, QData/*63:0*/ kwargs, QData/*63:0*/ &PyObject_Call__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_New_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ sz, QData/*63:0*/ &PyTuple_New__Vfuncrtn);
void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_SetItem_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ t, IData/*31:0*/ pos, QData/*63:0*/ i, IData/*31:0*/ &PyTuple_SetItem__Vfuncrtn);

VL_ATTR_COLD void Vpyhdl_call_if___024root___eval_initial__TOP(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_initial__TOP\n"); );
    // Init
    QData/*63:0*/ top__DOT__unnamedblk1__DOT__test_smoke;
    top__DOT__unnamedblk1__DOT__test_smoke = 0;
    QData/*63:0*/ __Vfunc_PyImport_ImportModule__0__Vfuncout;
    __Vfunc_PyImport_ImportModule__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_PyObject_GetAttrString__1__Vfuncout;
    __Vfunc_PyObject_GetAttrString__1__Vfuncout = 0;
    QData/*63:0*/ __Vtask_PyObject_Call__2__Vfuncout;
    __Vtask_PyObject_Call__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_pyhdl_mkTuple__3__Vfuncout;
    __Vfunc_pyhdl_mkTuple__3__Vfuncout = 0;
    VlQueue<QData/*63:0*/> __Vfunc_pyhdl_mkTuple__3__objs;
    __Vfunc_pyhdl_mkTuple__3__objs.atDefault() = 0;
    IData/*31:0*/ __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i;
    __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_pyhdl_mkTuple__3__t;
    __Vfunc_pyhdl_mkTuple__3__t = 0;
    QData/*63:0*/ __Vfunc_PyTuple_New__4__Vfuncout;
    __Vfunc_PyTuple_New__4__Vfuncout = 0;
    IData/*31:0*/ __Vtask_PyTuple_SetItem__5__Vfuncout;
    __Vtask_PyTuple_SetItem__5__Vfuncout = 0;
    // Body
    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyImport_ImportModule_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_top)), 
                                                                                "top.sv", 0xaU, 
                                                                                std::string{"my_module"}, __Vfunc_PyImport_ImportModule__0__Vfuncout);
    top__DOT__unnamedblk1__DOT__test_smoke = __Vfunc_PyImport_ImportModule__0__Vfuncout;
    if (VL_UNLIKELY((0ULL == top__DOT__unnamedblk1__DOT__test_smoke))) {
        VL_WRITEF("Fatal: failed to load module\n");
        VL_FINISH_MT("top.sv", 13, "");
    } else {
        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_GetAttrString_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_top)), 
                                                                                "top.sv", 0xfU, top__DOT__unnamedblk1__DOT__test_smoke, 
                                                                                std::string{"my_method"}, __Vfunc_PyObject_GetAttrString__1__Vfuncout);
        vlSelf->top__DOT__unnamedblk1__DOT__my_method 
            = __Vfunc_PyObject_GetAttrString__1__Vfuncout;
        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_Call_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_top)), 
                                                                                "top.sv", 0x10U, vlSelf->top__DOT__unnamedblk1__DOT__my_method, 
                                                                                ([&]() {
                    __Vfunc_pyhdl_mkTuple__3__objs 
                        = VlQueue<QData/*63:0*/>();
                    Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_New_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                                "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x1cU, __Vfunc_pyhdl_mkTuple__3__objs.size(), __Vfunc_PyTuple_New__4__Vfuncout);
                    __Vfunc_pyhdl_mkTuple__3__t = __Vfunc_PyTuple_New__4__Vfuncout;
                    __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i, __Vfunc_pyhdl_mkTuple__3__objs.size())) {
                        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_SetItem_TOP__pyhdl_call_if(
                                                                                (&(vlSymsp->__Vscope_pyhdl_call_if)), 
                                                                                "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 0x1eU, __Vfunc_pyhdl_mkTuple__3__t, __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i, __Vfunc_pyhdl_mkTuple__3__objs.at(__Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i), __Vtask_PyTuple_SetItem__5__Vfuncout);
                        __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i 
                            = ((IData)(1U) + __Vfunc_pyhdl_mkTuple__3__unnamedblk2_1__DOT__i);
                    }
                    __Vfunc_pyhdl_mkTuple__3__Vfuncout 
                        = __Vfunc_pyhdl_mkTuple__3__t;
                }(), __Vfunc_pyhdl_mkTuple__3__Vfuncout), 0ULL, __Vtask_PyObject_Call__2__Vfuncout);
    }
    VL_FINISH_MT("top.sv", 18, "");
}
