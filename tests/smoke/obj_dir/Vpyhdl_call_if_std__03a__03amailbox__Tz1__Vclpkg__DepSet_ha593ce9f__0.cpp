// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg.h"

Vpyhdl_call_if_std__03a__03amailbox__Tz1::Vpyhdl_call_if_std__03a__03amailbox__Tz1(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03amailbox__Tz1::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_bound = bound;
}

VlCoroutine Vpyhdl_call_if_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if ((0U != this->__PVT__m_bound)) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_haaed807e__0;
            __VdynTrigger_haaed807e__0 = 0;
            __VdynTrigger_haaed807e__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_h9902a668__0;
            __Vtrigcurrexpr_h9902a668__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_haaed807e__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                             44);
                __Vtrigcurrexpr_h9902a668__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_haaed807e__0 = __Vtrigcurrexpr_h9902a668__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haaed807e__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                         44);
        }
    }
    this->__PVT__m_queue.push_back(message);
}

VlCoroutine Vpyhdl_call_if_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h74c21502__0;
        __VdynTrigger_h74c21502__0 = 0;
        __VdynTrigger_h74c21502__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h4ebe3dec__0;
        __Vtrigcurrexpr_h4ebe3dec__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h74c21502__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                         59);
            __Vtrigcurrexpr_h4ebe3dec__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h74c21502__0 = __Vtrigcurrexpr_h4ebe3dec__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h74c21502__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                     59);
    }
    message = this->__PVT__m_queue.pop_front();
}

VlCoroutine Vpyhdl_call_if_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h74c21502__1;
        __VdynTrigger_h74c21502__1 = 0;
        __VdynTrigger_h74c21502__1 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h4ebe3dec__1;
        __Vtrigcurrexpr_h4ebe3dec__1 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h74c21502__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                         74);
            __Vtrigcurrexpr_h4ebe3dec__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h74c21502__1 = __Vtrigcurrexpr_h4ebe3dec__1;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h74c21502__1);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                     74);
    }
    message = this->__PVT__m_queue.at(0U);
}

void Vpyhdl_call_if_std__03a__03amailbox__Tz1::_ctor_var_reset(Vpyhdl_call_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_bound = 0;
    __PVT__m_queue.atDefault() = 0;
}
