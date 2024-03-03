// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VPYHDL_CALL_IF_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vpyhdl_call_if_std__03a__03aprocess;


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if_std__03a__03aprocess__Vclpkg(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vpyhdl_call_if_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vpyhdl_call_if__Syms* __restrict vlSymsp, VlClassRef<Vpyhdl_call_if_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vpyhdl_call_if__Syms;

class Vpyhdl_call_if_std__03a__03aprocess : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vpyhdl_call_if__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vpyhdl_call_if__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vpyhdl_call_if__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vpyhdl_call_if__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vpyhdl_call_if__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vpyhdl_call_if__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vpyhdl_call_if__Syms* __restrict vlSymsp);
  public:
    Vpyhdl_call_if_std__03a__03aprocess(Vpyhdl_call_if__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpyhdl_call_if_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<Vpyhdl_call_if_std__03a__03aprocess>& obj);

#endif  // guard
