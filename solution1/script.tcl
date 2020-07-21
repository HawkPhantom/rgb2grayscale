############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project rgb_2_grayscale
set_top image_filter
add_files rgb_2_grayscale/test.bmp
add_files rgb_2_grayscale/rgb_2_grayscale.hpp
add_files rgb_2_grayscale/rgb_2_grayscale.cpp
add_files -tb rgb_2_grayscale/rgb_2_grayscale_tb.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./rgb_2_grayscale/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -flow impl -rtl verilog -format ip_catalog -vendor "Furkan_Ciylan" -display_name "rgb_2_grayscale"
