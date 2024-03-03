// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if___024root.h"

VL_ATTR_COLD void Vpyhdl_call_if___024root___eval_initial__TOP(Vpyhdl_call_if___024root* vlSelf);

VL_ATTR_COLD void Vpyhdl_call_if___024root___eval_initial(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_initial\n"); );
    // Body
    Vpyhdl_call_if___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vpyhdl_call_if___024root___eval_final(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vpyhdl_call_if___024root___eval_settle(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpyhdl_call_if___024root___dump_triggers__act(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpyhdl_call_if___024root___dump_triggers__nba(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpyhdl_call_if___024root___ctor_var_reset(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top__DOT__unnamedblk1__DOT__my_method = 0;
    }
