create_project prj -part xa7a12tcsg325-1q -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "/home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/dda/syn/verilog/dda_ap_dadd_4_full_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips dda_ap_dadd_4_full_dsp_64]]
}
source "/home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/dda/syn/verilog/dda_ap_fdiv_10_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips dda_ap_fdiv_10_no_dsp_32]]
}
source "/home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/dda/syn/verilog/dda_ap_sitofp_3_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips dda_ap_sitofp_3_no_dsp_32]]
}
source "/home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/dda/syn/verilog/dda_ap_fadd_3_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips dda_ap_fadd_3_full_dsp_32]]
}
source "/home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/dda/syn/verilog/dda_ap_fpext_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips dda_ap_fpext_0_no_dsp_32]]
}
source "/home/herreral/Code/SystemC/HLSLinearGPU/HLS/LineAlgorithms/lineAlgorithms/dda/syn/verilog/dda_ap_fcmp_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips dda_ap_fcmp_0_no_dsp_32]]
}
