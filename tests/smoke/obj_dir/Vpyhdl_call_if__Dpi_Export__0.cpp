// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vpyhdl_call_if.h"
#include "Vpyhdl_call_if__Syms.h"
#include "verilated_dpi.h"


void Vpyhdl_call_if::pyhdl_queue_runnable(void* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root::pyhdl_queue_runnable\n"); );
    // Init
    QData/*63:0*/ obj__Vcvt;
    obj__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("pyhdl_queue_runnable");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vpyhdl_call_if__Vcb_pyhdl_queue_runnable_t __Vcb = (Vpyhdl_call_if__Vcb_pyhdl_queue_runnable_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    obj__Vcvt = VL_CVT_VP_Q(obj);
    (*__Vcb)((Vpyhdl_call_if__Syms*)(__Vscopep->symsp()), obj__Vcvt);
}
