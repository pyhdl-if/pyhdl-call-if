// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if___024root.h"

void Vpyhdl_call_if___024root___eval_act(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_act\n"); );
}

void Vpyhdl_call_if___024root___eval_nba(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_nba\n"); );
}

void Vpyhdl_call_if___024root___timing_resume(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdynSched.resume();
    }
}

void Vpyhdl_call_if___024root___eval_triggers__act(Vpyhdl_call_if___024root* vlSelf);

bool Vpyhdl_call_if___024root___eval_phase__act(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpyhdl_call_if___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpyhdl_call_if___024root___timing_resume(vlSelf);
        Vpyhdl_call_if___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpyhdl_call_if___024root___eval_phase__nba(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpyhdl_call_if___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpyhdl_call_if___024root___dump_triggers__nba(Vpyhdl_call_if___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpyhdl_call_if___024root___dump_triggers__act(Vpyhdl_call_if___024root* vlSelf);
#endif  // VL_DEBUG

void Vpyhdl_call_if___024root___eval(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpyhdl_call_if___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpyhdl_call_if___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpyhdl_call_if___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpyhdl_call_if___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpyhdl_call_if___024root___eval_debug_assertions(Vpyhdl_call_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpyhdl_call_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpyhdl_call_if___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
