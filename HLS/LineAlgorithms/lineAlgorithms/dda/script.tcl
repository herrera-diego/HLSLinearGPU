############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lineAlgorithms
set_top dda
add_files ../../Cpp/src/lineAlgorithms.cpp
add_files ../../Cpp/src/lineAlgorithms.cpp
add_files -tb ../../Cpp/src/test_top.cpp
add_files -tb ../../Cpp/src/test_top.cpp
open_solution "dda"
set_part {xa7a12tcsg325-1q}
create_clock -period 10 -name default
#source "./lineAlgorithms/dda/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
