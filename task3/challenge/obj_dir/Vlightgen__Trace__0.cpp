// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlightgen__Syms.h"


void Vlightgen___024root__trace_chg_sub_0(Vlightgen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlightgen___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root__trace_chg_top_0\n"); );
    // Init
    Vlightgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlightgen___024root*>(voidSelf);
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlightgen___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlightgen___024root__trace_chg_sub_0(Vlightgen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgSData(oldp+3,(vlSelf->N),16);
    bufp->chgCData(oldp+4,(vlSelf->data_out),8);
    bufp->chgBit(oldp+5,(vlSelf->lightgen__DOT__delay));
    bufp->chgSData(oldp+6,(vlSelf->lightgen__DOT__ClkTick__DOT__count),16);
    bufp->chgIData(oldp+7,(vlSelf->lightgen__DOT__FSM__DOT__current_state),32);
    bufp->chgIData(oldp+8,((((((((((0U == vlSelf->lightgen__DOT__FSM__DOT__current_state) 
                                   | (1U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
                                  | (2U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
                                 | (3U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
                                | (4U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
                               | (5U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
                              | (6U == vlSelf->lightgen__DOT__FSM__DOT__current_state)) 
                             | (7U == vlSelf->lightgen__DOT__FSM__DOT__current_state))
                             ? ((0U == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                 ? 1U : ((1U == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                          ? 2U : ((2U 
                                                   == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelf->lightgen__DOT__FSM__DOT__current_state)
                                                       ? 7U
                                                       : 8U)))))))
                             : 0U)),32);
}

void Vlightgen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlightgen___024root__trace_cleanup\n"); );
    // Init
    Vlightgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlightgen___024root*>(voidSelf);
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}