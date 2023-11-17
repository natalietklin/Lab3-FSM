// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlightgen.h"
#include "Vlightgen__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlightgen::Vlightgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlightgen__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlightgen::Vlightgen(const char* _vcname__)
    : Vlightgen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlightgen::~Vlightgen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlightgen___024root___eval_initial(Vlightgen___024root* vlSelf);
void Vlightgen___024root___eval_settle(Vlightgen___024root* vlSelf);
void Vlightgen___024root___eval(Vlightgen___024root* vlSelf);
#ifdef VL_DEBUG
void Vlightgen___024root___eval_debug_assertions(Vlightgen___024root* vlSelf);
#endif  // VL_DEBUG
void Vlightgen___024root___final(Vlightgen___024root* vlSelf);

static void _eval_initial_loop(Vlightgen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlightgen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlightgen___024root___eval_settle(&(vlSymsp->TOP));
        Vlightgen___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlightgen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlightgen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlightgen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlightgen___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlightgen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlightgen::final() {
    Vlightgen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlightgen::hierName() const { return vlSymsp->name(); }
const char* Vlightgen::modelName() const { return "Vlightgen"; }
unsigned Vlightgen::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlightgen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlightgen___024root__trace_init_top(Vlightgen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlightgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlightgen___024root*>(voidSelf);
    Vlightgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlightgen___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlightgen___024root__trace_register(Vlightgen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlightgen::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlightgen___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
