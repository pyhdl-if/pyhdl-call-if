// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF_PYHDL_CALL_IF_H_
#define VERILATED_VPYHDL_CALL_IF_PYHDL_CALL_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vpyhdl_call_if_std__03a__03amailbox__Tz1;


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if_pyhdl_call_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpyhdl_call_if_std__03a__03amailbox__Tz1> __PVT__invoke_q;

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if_pyhdl_call_if(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if_pyhdl_call_if();
    VL_UNCOPYABLE(Vpyhdl_call_if_pyhdl_call_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
