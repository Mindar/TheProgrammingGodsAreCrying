// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshiftregister__Syms.h"


VL_ATTR_COLD void Vshiftregister___024root__trace_init_sub__TOP__0(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"i_clk", false,-1);
    tracep->declBit(c+2,"i_nrst", false,-1);
    tracep->declBit(c+3,"i_din", false,-1);
    tracep->declBit(c+4,"i_shift", false,-1);
    tracep->declBus(c+5,"o_dout", false,-1, 7,0);
    tracep->pushNamePrefix("shiftregister ");
    tracep->declBit(c+1,"i_clk", false,-1);
    tracep->declBit(c+2,"i_nrst", false,-1);
    tracep->declBit(c+3,"i_din", false,-1);
    tracep->declBit(c+4,"i_shift", false,-1);
    tracep->declBus(c+5,"o_dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vshiftregister___024root__trace_init_top(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root__trace_init_top\n"); );
    // Body
    Vshiftregister___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshiftregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vshiftregister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vshiftregister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshiftregister___024root__trace_register(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vshiftregister___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vshiftregister___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vshiftregister___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshiftregister___024root__trace_full_sub_0(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshiftregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root__trace_full_top_0\n"); );
    // Init
    Vshiftregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshiftregister___024root*>(voidSelf);
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshiftregister___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vshiftregister___024root__trace_full_sub_0(Vshiftregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->i_clk));
    tracep->fullBit(oldp+2,(vlSelf->i_nrst));
    tracep->fullBit(oldp+3,(vlSelf->i_din));
    tracep->fullBit(oldp+4,(vlSelf->i_shift));
    tracep->fullCData(oldp+5,(vlSelf->o_dout),8);
}
