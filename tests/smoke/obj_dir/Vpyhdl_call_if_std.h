// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF_STD_H_
#define VERILATED_VPYHDL_CALL_IF_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if_std(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if_std();
    VL_UNCOPYABLE(Vpyhdl_call_if_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
