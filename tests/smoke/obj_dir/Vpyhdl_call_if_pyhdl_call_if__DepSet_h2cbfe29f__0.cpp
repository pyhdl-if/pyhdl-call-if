// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if_pyhdl_call_if.h"
#include "Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg.h"

void Vpyhdl_call_if_pyhdl_call_if____Vdpiexp_pyhdl_queue_runnable_TOP__pyhdl_call_if(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiexp_pyhdl_queue_runnable_TOP__pyhdl_call_if\n"); );
    // Init
    IData/*31:0*/ __Vtask_try_put__7__Vfuncout;
    __Vtask_try_put__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__pyhdl_call_if.__PVT__invoke_q, "../../src/hdl_call_if/share/sv/pyhdl_call_if.sv", 75)->__VnoInFunc_try_put(vlSymsp, obj, __Vtask_try_put__7__Vfuncout);
}
