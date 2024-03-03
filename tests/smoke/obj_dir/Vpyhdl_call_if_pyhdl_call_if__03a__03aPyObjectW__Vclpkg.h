// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF_PYHDL_CALL_IF__03A__03APYOBJECTW__VCLPKG_H_
#define VERILATED_VPYHDL_CALL_IF_PYHDL_CALL_IF__03A__03APYOBJECTW__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg();
    VL_UNCOPYABLE(Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpyhdl_call_if__Syms;

class Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW : public VlClass {
  public:
  private:
    void _ctor_var_reset(Vpyhdl_call_if__Syms* __restrict vlSymsp);
  public:
    Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW(Vpyhdl_call_if__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW();
};

std::string VL_TO_STRING(const VlClassRef<Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW>& obj);

#endif  // guard
