############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lineAlgorithms
set_top bresenham
add_files ../../Cpp/src/lineAlgorithms.cpp
add_files -tb ../../Cpp/Gold.dat
add_files -tb ../../Cpp/src/test_top.cpp -cflags "-Wno-unknown-pragmas"
open_solution "bresenham"
set_part {xa7a12tcsg325-1q}
create_clock -period 10 -name default
#source "./lineAlgorithms/bresenham/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
