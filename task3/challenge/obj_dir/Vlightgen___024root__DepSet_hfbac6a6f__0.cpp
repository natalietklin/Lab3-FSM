// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlightgen.h for the primary calling header

#include "verilated.h"

#include "Vlightgen___024root.h"

VL_INLINE_OPT void Vlightgen___024root___sequent__TOP__0(Vlightgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__lightgen__DOT__ClkTick__DOT__count 
        = vlSelf->lightgen__DOT__ClkTick__DOT__count;
}

VL_INLINE_OPT void Vlightgen___024root___sequent__TOP__1(Vlightgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->lightgen__DOT__FSM__DOT__current_state = 0U;
    } else if (vlSelf->lightgen__DOT__delay) {
        vlSelf->lightgen__DOT__FSM__DOT__current_state 
            = vlSelf->lightgen__DOT__FSM__DOT__next_state;
    }
    if (((((((((0U == vlSelf->lightgen__DOT__FSM__DOT__current_state) 
               | (1U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
              | (2U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
             | (3U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
            | (4U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
           | (5U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
          | (6U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
         | (7U == vlSelf->lightgen__DOT__FSM__DOT__current_state))) {
        if ((0U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->lightgen__DOT__FSM__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->lightgen__DOT__FSM__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                             ? 0xffU : 0U);
    }
}

VL_INLINE_OPT void Vlightgen___024root___sequent__TOP__2(Vlightgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->lightgen__DOT__delay = 0U;
        vlSelf->__Vdly__lightgen__DOT__ClkTick__DOT__count 
            = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->lightgen__DOT__ClkTick__DOT__count))) {
            vlSelf->lightgen__DOT__delay = 1U;
            vlSelf->__Vdly__lightgen__DOT__ClkTick__DOT__count 
                = vlSelf->N;
        } else {
            vlSelf->__Vdly__lightgen__DOT__ClkTick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->lightgen__DOT__ClkTick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->lightgen__DOT__delay = 0U;
        }
    }
    vlSelf->lightgen__DOT__ClkTick__DOT__count = vlSelf->__Vdly__lightgen__DOT__ClkTick__DOT__count;
}

void Vlightgen___024root___eval(Vlightgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlightgen___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlightgen___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlightgen___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlightgen___024root___eval_debug_assertions(Vlightgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
