`ifndef SIM_DEFINE_V
`define SIM_DEFINE_V
//-----------------------------------------------------------------------
// Copyright (c) 2021 by Ando Ki
// All rights reserved.
//-----------------------------------------------------------------------
`define SIM      // define this for simulation case if you are not sure
`undef  SYN      // undefine this for simulation case
`undef  VCD      // define this for VCD waveform dump
`define FSDB      // define this for VCD waveform dump
`undef  DEBUG
`define RIGOR
//-----------------------------------------------------------------------
`define AMBA_AXI4
//-----------------------------------------------------------------------
`define COSIM_DPI
`define COSIM_VERBOSE 1
//-----------------------------------------------------------------------
`endif
