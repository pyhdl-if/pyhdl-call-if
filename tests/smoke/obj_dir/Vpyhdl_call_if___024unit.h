// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF___024UNIT_H_
#define VERILATED_VPYHDL_CALL_IF___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if___024unit(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if___024unit();
    VL_UNCOPYABLE(Vpyhdl_call_if___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
