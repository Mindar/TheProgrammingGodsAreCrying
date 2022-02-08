// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshiftregister.h for the primary calling header

#ifndef VERILATED_VSHIFTREGISTER___024ROOT_H_
#define VERILATED_VSHIFTREGISTER___024ROOT_H_  // guard

#include "verilated.h"

class Vshiftregister__Syms;
VL_MODULE(Vshiftregister___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_nrst,0,0);
    VL_IN8(i_din,0,0);
    VL_IN8(i_shift,0,0);
    VL_OUT8(o_dout,7,0);
    CData/*0:0*/ __Vclklast__TOP__i_clk;

    // INTERNAL VARIABLES
    Vshiftregister__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vshiftregister___024root(const char* name);
    ~Vshiftregister___024root();
    VL_UNCOPYABLE(Vshiftregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vshiftregister__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
