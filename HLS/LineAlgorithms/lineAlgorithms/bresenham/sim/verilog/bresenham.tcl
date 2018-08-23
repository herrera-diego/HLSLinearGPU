
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set yp_group [add_wave_group yp(wire) -into $coutputgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/yp_ap_vld -into $yp_group -color #ffff00 -radix hex
add_wave /apatb_bresenham_top/AESL_inst_bresenham/yp -into $yp_group -radix hex
set xp_group [add_wave_group xp(wire) -into $coutputgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/xp_ap_vld -into $xp_group -color #ffff00 -radix hex
add_wave /apatb_bresenham_top/AESL_inst_bresenham/xp -into $xp_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set y1_group [add_wave_group y1(wire) -into $cinputgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/y1 -into $y1_group -radix hex
set x1_group [add_wave_group x1(wire) -into $cinputgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/x1 -into $x1_group -radix hex
set y0_group [add_wave_group y0(wire) -into $cinputgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/y0 -into $y0_group -radix hex
set x0_group [add_wave_group x0(wire) -into $cinputgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/x0 -into $x0_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/ap_start -into $blocksiggroup
add_wave /apatb_bresenham_top/AESL_inst_bresenham/ap_done -into $blocksiggroup
add_wave /apatb_bresenham_top/AESL_inst_bresenham/ap_idle -into $blocksiggroup
add_wave /apatb_bresenham_top/AESL_inst_bresenham/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_bresenham_top/AESL_inst_bresenham/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_bresenham_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_bresenham_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_bresenham_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_bresenham_top/LENGTH_x0 -into $tb_portdepth_group -radix hex
add_wave /apatb_bresenham_top/LENGTH_y0 -into $tb_portdepth_group -radix hex
add_wave /apatb_bresenham_top/LENGTH_x1 -into $tb_portdepth_group -radix hex
add_wave /apatb_bresenham_top/LENGTH_y1 -into $tb_portdepth_group -radix hex
add_wave /apatb_bresenham_top/LENGTH_xp -into $tb_portdepth_group -radix hex
add_wave /apatb_bresenham_top/LENGTH_yp -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_yp_group [add_wave_group yp(wire) -into $tbcoutputgroup]
add_wave /apatb_bresenham_top/yp_ap_vld -into $tb_yp_group -color #ffff00 -radix hex
add_wave /apatb_bresenham_top/yp -into $tb_yp_group -radix hex
set tb_xp_group [add_wave_group xp(wire) -into $tbcoutputgroup]
add_wave /apatb_bresenham_top/xp_ap_vld -into $tb_xp_group -color #ffff00 -radix hex
add_wave /apatb_bresenham_top/xp -into $tb_xp_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_y1_group [add_wave_group y1(wire) -into $tbcinputgroup]
add_wave /apatb_bresenham_top/y1 -into $tb_y1_group -radix hex
set tb_x1_group [add_wave_group x1(wire) -into $tbcinputgroup]
add_wave /apatb_bresenham_top/x1 -into $tb_x1_group -radix hex
set tb_y0_group [add_wave_group y0(wire) -into $tbcinputgroup]
add_wave /apatb_bresenham_top/y0 -into $tb_y0_group -radix hex
set tb_x0_group [add_wave_group x0(wire) -into $tbcinputgroup]
add_wave /apatb_bresenham_top/x0 -into $tb_x0_group -radix hex
save_wave_config bresenham.wcfg
run all
quit

