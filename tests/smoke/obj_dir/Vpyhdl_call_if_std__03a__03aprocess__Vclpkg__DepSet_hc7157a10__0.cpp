// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if_std__03a__03aprocess__Vclpkg.h"

void Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_set_status(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body
    // $c statement at /project/tools/verilator/5.018/share/verilator/include/verilated_std.sv:139:10
    this->__PVT__m_process->state(s);
}

void Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_status(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 
    // $c function at /project/tools/verilator/5.018/share/verilator/include/verilated_std.sv:145:24
    this->__PVT__m_process->state()
    ;
}

void Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_kill(Vpyhdl_call_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_resume(Vpyhdl_call_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

void Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_get_randstate(Vpyhdl_call_if__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_SFORMATF_NX("%0d",32,VL_RANDOM_I()) ;
    this->__VnoInFunc_set_randstate(vlSymsp, s);
    get_randstate__Vfuncrtn = s;
}

void Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_set_randstate(Vpyhdl_call_if__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body
    (void)VL_URANDOM_SEEDED_II(VL_ATOI_N(s, 10));
}

Vpyhdl_call_if_std__03a__03aprocess::~Vpyhdl_call_if_std__03a__03aprocess() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpyhdl_call_if_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpyhdl_call_if_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vpyhdl_call_if_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpyhdl_call_if_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return out;
}
