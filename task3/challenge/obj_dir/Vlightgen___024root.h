// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlightgen.h for the primary calling header

#ifndef VERILATED_VLIGHTGEN___024ROOT_H_
#define VERILATED_VLIGHTGEN___024ROOT_H_  // guard

#include "verilated.h"

class Vlightgen__Syms;

class Vlightgen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ lightgen__DOT__delay;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN16(N,15,0);
    SData/*15:0*/ lightgen__DOT__ClkTick__DOT__count;
    SData/*15:0*/ __Vdly__lightgen__DOT__ClkTick__DOT__count;
    IData/*31:0*/ lightgen__DOT__FSM__DOT__current_state;
    IData/*31:0*/ lightgen__DOT__FSM__DOT__next_state;

    // INTERNAL VARIABLES
    Vlightgen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlightgen___024root(Vlightgen__Syms* symsp, const char* name);
    ~Vlightgen___024root();
    VL_UNCOPYABLE(Vlightgen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
