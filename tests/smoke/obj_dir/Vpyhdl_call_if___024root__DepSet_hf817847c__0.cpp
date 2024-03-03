// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpyhdl_call_if___024root___dump_triggers__act(Vpyhdl_call_if___024root* vlSelf);
#endif  // VL_DEBUG

void Vpyhdl_call_if___024root___eval_triggers__act(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdynSched.evaluate());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpyhdl_call_if___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelf->__VdynSched.doPostUpdates();
}
