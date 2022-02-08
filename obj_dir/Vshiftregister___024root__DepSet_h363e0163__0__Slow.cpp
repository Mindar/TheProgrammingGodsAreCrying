// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftregister.h for the primary calling header

#include "verilated.h"

#include "Vshiftregister___024root.h"

VL_ATTR_COLD void Vshiftregister___024root___eval_initial(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
}

VL_ATTR_COLD void Vshiftregister___024root___eval_settle(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vshiftregister___024root___final(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___final\n"); );
}

VL_ATTR_COLD void Vshiftregister___024root___ctor_var_reset(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_nrst = VL_RAND_RESET_I(1);
    vlSelf->i_din = VL_RAND_RESET_I(1);
    vlSelf->i_shift = VL_RAND_RESET_I(1);
    vlSelf->o_dout = VL_RAND_RESET_I(8);
}
