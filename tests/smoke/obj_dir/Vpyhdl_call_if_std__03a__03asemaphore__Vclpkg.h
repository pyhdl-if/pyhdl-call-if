// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VPYHDL_CALL_IF_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpyhdl_call_if__Syms;

class Vpyhdl_call_if_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpyhdl_call_if__Syms* __restrict vlSymsp);
  public:
    Vpyhdl_call_if_std__03a__03asemaphore(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpyhdl_call_if_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<Vpyhdl_call_if_std__03a__03asemaphore>& obj);

#endif  // guard
