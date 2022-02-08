// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftregister.h for the primary calling header

#include "verilated.h"

#include "Vshiftregister__Syms.h"
#include "Vshiftregister___024root.h"

void Vshiftregister___024root___ctor_var_reset(Vshiftregister___024root* vlSelf);

Vshiftregister___024root::Vshiftregister___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vshiftregister___024root___ctor_var_reset(this);
}

void Vshiftregister___024root::__Vconfigure(Vshiftregister__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vshiftregister___024root::~Vshiftregister___024root() {
}
