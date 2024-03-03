// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if_std.h"

void Vpyhdl_call_if_std___ctor_var_reset(Vpyhdl_call_if_std* vlSelf);

Vpyhdl_call_if_std::Vpyhdl_call_if_std(Vpyhdl_call_if__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpyhdl_call_if_std___ctor_var_reset(this);
}

void Vpyhdl_call_if_std::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpyhdl_call_if_std::~Vpyhdl_call_if_std() {
}
