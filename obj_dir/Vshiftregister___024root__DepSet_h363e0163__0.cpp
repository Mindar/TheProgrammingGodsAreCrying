// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftregister.h for the primary calling header

#include "verilated.h"

#include "Vshiftregister___024root.h"

VL_INLINE_OPT void Vshiftregister___024root___sequent__TOP__1(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->i_nrst) {
        if (vlSelf->i_shift) {
            vlSelf->o_dout = ((0xfeU & ((IData)(vlSelf->o_dout) 
                                        << 1U)) | (IData)(vlSelf->i_din));
        }
    } else {
        vlSelf->o_dout = 0U;
    }
}

void Vshiftregister___024root___eval(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->i_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__i_clk)))) {
        Vshiftregister___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
}

#ifdef VL_DEBUG
void Vshiftregister___024root___eval_debug_assertions(Vshiftregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftregister___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_nrst & 0xfeU))) {
        Verilated::overWidthError("i_nrst");}
    if (VL_UNLIKELY((vlSelf->i_din & 0xfeU))) {
        Verilated::overWidthError("i_din");}
    if (VL_UNLIKELY((vlSelf->i_shift & 0xfeU))) {
        Verilated::overWidthError("i_shift");}
}
#endif  // VL_DEBUG
