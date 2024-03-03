// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VPYHDL_CALL_IF_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg();
    VL_UNCOPYABLE(Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpyhdl_call_if__Syms;

class Vpyhdl_call_if_std__03a__03amailbox__Tz1 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<QData/*63:0*/> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ &message);
    void __VnoInFunc_num(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ &message);
    VlCoroutine __VnoInFunc_put(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ message);
    void __VnoInFunc_try_get(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpyhdl_call_if__Syms* __restrict vlSymsp);
  public:
    Vpyhdl_call_if_std__03a__03amailbox__Tz1(Vpyhdl_call_if__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpyhdl_call_if_std__03a__03amailbox__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Vpyhdl_call_if_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
