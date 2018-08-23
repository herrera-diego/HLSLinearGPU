// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _midpoint_HH_
#define _midpoint_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct midpoint : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x0;
    sc_in< sc_lv<32> > y0;
    sc_in< sc_lv<32> > x1;
    sc_in< sc_lv<32> > y1;
    sc_out< sc_lv<32> > xp;
    sc_out< sc_logic > xp_ap_vld;
    sc_out< sc_lv<32> > yp;
    sc_out< sc_logic > yp_ap_vld;


    // Module declarations
    midpoint(sc_module_name name);
    SC_HAS_PROCESS(midpoint);

    ~midpoint();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > dx_fu_97_p2;
    sc_signal< sc_lv<32> > dx_reg_230;
    sc_signal< sc_lv<31> > p_lshr_reg_237;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > dy_fu_119_p2;
    sc_signal< sc_lv<32> > dy_reg_247;
    sc_signal< sc_lv<32> > d_fu_162_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_168_p2;
    sc_signal< sc_lv<32> > tmp_2_reg_257;
    sc_signal< sc_lv<32> > x_1_fu_178_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_3_fu_173_p2;
    sc_signal< sc_lv<32> > y_0_s_fu_205_p3;
    sc_signal< sc_lv<32> > d_1_fu_214_p2;
    sc_signal< sc_lv<32> > d1_reg_70;
    sc_signal< sc_lv<32> > x_reg_79;
    sc_signal< sc_lv<32> > y_reg_88;
    sc_signal< sc_lv<32> > p_neg_fu_103_p2;
    sc_signal< sc_lv<32> > tmp_1_fu_132_p1;
    sc_signal< sc_lv<31> > p_lshr_f_fu_141_p4;
    sc_signal< sc_lv<1> > tmp_5_fu_125_p3;
    sc_signal< sc_lv<32> > p_neg_t_fu_135_p2;
    sc_signal< sc_lv<32> > tmp_4_fu_150_p1;
    sc_signal< sc_lv<32> > tmp_fu_154_p3;
    sc_signal< sc_lv<1> > tmp_6_fu_185_p3;
    sc_signal< sc_lv<32> > y_1_fu_193_p2;
    sc_signal< sc_lv<32> > dy_0_s_fu_199_p3;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<1> ap_const_lv1_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_d_1_fu_214_p2();
    void thread_d_fu_162_p2();
    void thread_dx_fu_97_p2();
    void thread_dy_0_s_fu_199_p3();
    void thread_dy_fu_119_p2();
    void thread_p_lshr_f_fu_141_p4();
    void thread_p_neg_fu_103_p2();
    void thread_p_neg_t_fu_135_p2();
    void thread_tmp_1_fu_132_p1();
    void thread_tmp_2_fu_168_p2();
    void thread_tmp_3_fu_173_p2();
    void thread_tmp_4_fu_150_p1();
    void thread_tmp_5_fu_125_p3();
    void thread_tmp_6_fu_185_p3();
    void thread_tmp_fu_154_p3();
    void thread_x_1_fu_178_p2();
    void thread_xp();
    void thread_xp_ap_vld();
    void thread_y_0_s_fu_205_p3();
    void thread_y_1_fu_193_p2();
    void thread_yp();
    void thread_yp_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif