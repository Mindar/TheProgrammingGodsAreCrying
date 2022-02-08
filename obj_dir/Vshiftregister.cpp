// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshiftregister.h"
#include "Vshiftregister__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshiftregister::Vshiftregister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshiftregister__Syms(_vcontextp__, _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_nrst{vlSymsp->TOP.i_nrst}
    , i_din{vlSymsp->TOP.i_din}
    , i_shift{vlSymsp->TOP.i_shift}
    , o_dout{vlSymsp->TOP.o_dout}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshiftregister::Vshiftregister(const char* _vcname__)
    : Vshiftregister(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshiftregister::~Vshiftregister() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshiftregister___024root___eval_initial(Vshiftregister___024root* vlSelf);
void Vshiftregister___024root___eval_settle(Vshiftregister___024root* vlSelf);
void Vshiftregister___024root___eval(Vshiftregister___024root* vlSelf);
#ifdef VL_DEBUG
void Vshiftregister___024root___eval_debug_assertions(Vshiftregister___024root* vlSelf);
#endif  // VL_DEBUG
void Vshiftregister___024root___final(Vshiftregister___024root* vlSelf);

static void _eval_initial_loop(Vshiftregister__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshiftregister___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshiftregister___024root___eval_settle(&(vlSymsp->TOP));
        Vshiftregister___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vshiftregister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshiftregister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshiftregister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshiftregister___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vshiftregister::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshiftregister::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vshiftregister::final() {
    Vshiftregister___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vshiftregister___024root__trace_init_top(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshiftregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshiftregister___024root*>(voidSelf);
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vshiftregister___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vshiftregister___024root__trace_register(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshiftregister::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vshiftregister___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
