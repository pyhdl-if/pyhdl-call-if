// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg.h"

Vpyhdl_call_if_std__03a__03asemaphore::Vpyhdl_call_if_std__03a__03asemaphore(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03asemaphore::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_keyCount = keyCount;
}

VlCoroutine Vpyhdl_call_if_std__03a__03asemaphore::__VnoInFunc_get(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03asemaphore::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
        CData/*0:0*/ __VdynTrigger_h720ba203__0;
        __VdynTrigger_h720ba203__0 = 0;
        __VdynTrigger_h720ba203__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h53e4ccef__0;
        __Vtrigcurrexpr_h53e4ccef__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h720ba203__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                         "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                         101);
            __Vtrigcurrexpr_h53e4ccef__0 = VL_GTES_III(32, this->__PVT__m_keyCount, keyCount);
            __VdynTrigger_h720ba203__0 = __Vtrigcurrexpr_h53e4ccef__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h720ba203__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                     "/project/tools/verilator/5.018/share/verilator/include/verilated_std.sv", 
                                                     101);
    }
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               - keyCount);
}

void Vpyhdl_call_if_std__03a__03asemaphore::_ctor_var_reset(Vpyhdl_call_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_keyCount = 0;
}
