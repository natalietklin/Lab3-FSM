// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlightgen.h for the primary calling header

#include "verilated.h"

#include "Vlightgen__Syms.h"
#include "Vlightgen___024root.h"

void Vlightgen___024root___ctor_var_reset(Vlightgen___024root* vlSelf);

Vlightgen___024root::Vlightgen___024root(Vlightgen__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlightgen___024root___ctor_var_reset(this);
}

void Vlightgen___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlightgen___024root::~Vlightgen___024root() {
}
