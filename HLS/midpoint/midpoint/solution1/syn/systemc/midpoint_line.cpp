// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "midpoint_line.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic midpoint_line::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic midpoint_line::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> midpoint_line::ap_ST_fsm_state1 = "1";
const sc_lv<3> midpoint_line::ap_ST_fsm_state2 = "10";
const sc_lv<3> midpoint_line::ap_ST_fsm_state3 = "100";
const sc_lv<32> midpoint_line::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> midpoint_line::ap_const_lv32_1 = "1";
const sc_lv<32> midpoint_line::ap_const_lv32_2 = "10";
const sc_lv<1> midpoint_line::ap_const_lv1_1 = "1";
const sc_lv<32> midpoint_line::ap_const_lv32_1F = "11111";
const sc_lv<1> midpoint_line::ap_const_lv1_0 = "0";
const bool midpoint_line::ap_const_boolean_1 = true;

midpoint_line::midpoint_line(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );

    SC_METHOD(thread_d_1_fu_214_p2);
    sensitive << ( d1_reg_70 );
    sensitive << ( dy_0_s_fu_199_p3 );

    SC_METHOD(thread_d_fu_162_p2);
    sensitive << ( dy_fu_119_p2 );
    sensitive << ( tmp_fu_154_p3 );

    SC_METHOD(thread_dx_fu_97_p2);
    sensitive << ( midpoint_X0 );
    sensitive << ( midpoint_X1 );

    SC_METHOD(thread_dy_0_s_fu_199_p3);
    sensitive << ( dy_reg_247 );
    sensitive << ( tmp_2_reg_257 );
    sensitive << ( tmp_6_fu_185_p3 );

    SC_METHOD(thread_dy_fu_119_p2);
    sensitive << ( midpoint_Y0 );
    sensitive << ( midpoint_Y1 );

    SC_METHOD(thread_midpoint_PX);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );
    sensitive << ( x1_reg_79 );

    SC_METHOD(thread_midpoint_PX_ap_vld);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );

    SC_METHOD(thread_midpoint_PY);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );
    sensitive << ( y1_reg_88 );
    sensitive << ( tmp_6_fu_185_p3 );
    sensitive << ( y_1_fu_193_p2 );

    SC_METHOD(thread_midpoint_PY_ap_vld);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );

    SC_METHOD(thread_p_lshr_f_fu_141_p4);
    sensitive << ( dx_reg_230 );

    SC_METHOD(thread_p_neg_fu_103_p2);
    sensitive << ( dx_fu_97_p2 );

    SC_METHOD(thread_p_neg_t_fu_135_p2);
    sensitive << ( tmp_1_fu_132_p1 );

    SC_METHOD(thread_tmp_1_fu_132_p1);
    sensitive << ( p_lshr_reg_237 );

    SC_METHOD(thread_tmp_2_fu_168_p2);
    sensitive << ( dx_reg_230 );
    sensitive << ( dy_fu_119_p2 );

    SC_METHOD(thread_tmp_3_fu_173_p2);
    sensitive << ( midpoint_X1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( x1_reg_79 );

    SC_METHOD(thread_tmp_4_fu_150_p1);
    sensitive << ( p_lshr_f_fu_141_p4 );

    SC_METHOD(thread_tmp_5_fu_125_p3);
    sensitive << ( dx_reg_230 );

    SC_METHOD(thread_tmp_6_fu_185_p3);
    sensitive << ( d1_reg_70 );

    SC_METHOD(thread_tmp_fu_154_p3);
    sensitive << ( tmp_5_fu_125_p3 );
    sensitive << ( p_neg_t_fu_135_p2 );
    sensitive << ( tmp_4_fu_150_p1 );

    SC_METHOD(thread_x_1_fu_178_p2);
    sensitive << ( x1_reg_79 );

    SC_METHOD(thread_y_0_s_fu_205_p3);
    sensitive << ( y1_reg_88 );
    sensitive << ( tmp_6_fu_185_p3 );
    sensitive << ( y_1_fu_193_p2 );

    SC_METHOD(thread_y_1_fu_193_p2);
    sensitive << ( y1_reg_88 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_173_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "midpoint_line_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, midpoint_X0, "(port)midpoint_X0");
    sc_trace(mVcdFile, midpoint_Y0, "(port)midpoint_Y0");
    sc_trace(mVcdFile, midpoint_X1, "(port)midpoint_X1");
    sc_trace(mVcdFile, midpoint_Y1, "(port)midpoint_Y1");
    sc_trace(mVcdFile, midpoint_PX, "(port)midpoint_PX");
    sc_trace(mVcdFile, midpoint_PX_ap_vld, "(port)midpoint_PX_ap_vld");
    sc_trace(mVcdFile, midpoint_PY, "(port)midpoint_PY");
    sc_trace(mVcdFile, midpoint_PY_ap_vld, "(port)midpoint_PY_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, dx_fu_97_p2, "dx_fu_97_p2");
    sc_trace(mVcdFile, dx_reg_230, "dx_reg_230");
    sc_trace(mVcdFile, p_lshr_reg_237, "p_lshr_reg_237");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, dy_fu_119_p2, "dy_fu_119_p2");
    sc_trace(mVcdFile, dy_reg_247, "dy_reg_247");
    sc_trace(mVcdFile, d_fu_162_p2, "d_fu_162_p2");
    sc_trace(mVcdFile, tmp_2_fu_168_p2, "tmp_2_fu_168_p2");
    sc_trace(mVcdFile, tmp_2_reg_257, "tmp_2_reg_257");
    sc_trace(mVcdFile, x_1_fu_178_p2, "x_1_fu_178_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_3_fu_173_p2, "tmp_3_fu_173_p2");
    sc_trace(mVcdFile, y_0_s_fu_205_p3, "y_0_s_fu_205_p3");
    sc_trace(mVcdFile, d_1_fu_214_p2, "d_1_fu_214_p2");
    sc_trace(mVcdFile, d1_reg_70, "d1_reg_70");
    sc_trace(mVcdFile, x1_reg_79, "x1_reg_79");
    sc_trace(mVcdFile, y1_reg_88, "y1_reg_88");
    sc_trace(mVcdFile, p_neg_fu_103_p2, "p_neg_fu_103_p2");
    sc_trace(mVcdFile, tmp_1_fu_132_p1, "tmp_1_fu_132_p1");
    sc_trace(mVcdFile, p_lshr_f_fu_141_p4, "p_lshr_f_fu_141_p4");
    sc_trace(mVcdFile, tmp_5_fu_125_p3, "tmp_5_fu_125_p3");
    sc_trace(mVcdFile, p_neg_t_fu_135_p2, "p_neg_t_fu_135_p2");
    sc_trace(mVcdFile, tmp_4_fu_150_p1, "tmp_4_fu_150_p1");
    sc_trace(mVcdFile, tmp_fu_154_p3, "tmp_fu_154_p3");
    sc_trace(mVcdFile, tmp_6_fu_185_p3, "tmp_6_fu_185_p3");
    sc_trace(mVcdFile, y_1_fu_193_p2, "y_1_fu_193_p2");
    sc_trace(mVcdFile, dy_0_s_fu_199_p3, "dy_0_s_fu_199_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("midpoint_line.hdltvin.dat");
    mHdltvoutHandle.open("midpoint_line.hdltvout.dat");
}

midpoint_line::~midpoint_line() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void midpoint_line::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        d1_reg_70 = d_1_fu_214_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        d1_reg_70 = d_fu_162_p2.read();
    }
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        x1_reg_79 = x_1_fu_178_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        x1_reg_79 = midpoint_X0.read();
    }
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        y1_reg_88 = y_0_s_fu_205_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        y1_reg_88 = midpoint_Y0.read();
    }
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        dx_reg_230 = dx_fu_97_p2.read();
        p_lshr_reg_237 = p_neg_fu_103_p2.read().range(31, 1);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dy_reg_247 = dy_fu_119_p2.read();
        tmp_2_reg_257 = tmp_2_fu_168_p2.read();
    }
}

void midpoint_line::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void midpoint_line::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void midpoint_line::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void midpoint_line::thread_ap_done() {
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void midpoint_line::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void midpoint_line::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void midpoint_line::thread_d_1_fu_214_p2() {
    d_1_fu_214_p2 = (!dy_0_s_fu_199_p3.read().is_01() || !d1_reg_70.read().is_01())? sc_lv<32>(): (sc_biguint<32>(dy_0_s_fu_199_p3.read()) + sc_biguint<32>(d1_reg_70.read()));
}

void midpoint_line::thread_d_fu_162_p2() {
    d_fu_162_p2 = (!dy_fu_119_p2.read().is_01() || !tmp_fu_154_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(dy_fu_119_p2.read()) - sc_biguint<32>(tmp_fu_154_p3.read()));
}

void midpoint_line::thread_dx_fu_97_p2() {
    dx_fu_97_p2 = (!midpoint_X1.read().is_01() || !midpoint_X0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(midpoint_X1.read()) - sc_biguint<32>(midpoint_X0.read()));
}

void midpoint_line::thread_dy_0_s_fu_199_p3() {
    dy_0_s_fu_199_p3 = (!tmp_6_fu_185_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_185_p3.read()[0].to_bool())? dy_reg_247.read(): tmp_2_reg_257.read());
}

void midpoint_line::thread_dy_fu_119_p2() {
    dy_fu_119_p2 = (!midpoint_Y1.read().is_01() || !midpoint_Y0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(midpoint_Y1.read()) - sc_biguint<32>(midpoint_Y0.read()));
}

void midpoint_line::thread_midpoint_PX() {
    midpoint_PX = (!x1_reg_79.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(x1_reg_79.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void midpoint_line::thread_midpoint_PX_ap_vld() {
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        midpoint_PX_ap_vld = ap_const_logic_1;
    } else {
        midpoint_PX_ap_vld = ap_const_logic_0;
    }
}

void midpoint_line::thread_midpoint_PY() {
    midpoint_PY = (!tmp_6_fu_185_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_185_p3.read()[0].to_bool())? y1_reg_88.read(): y_1_fu_193_p2.read());
}

void midpoint_line::thread_midpoint_PY_ap_vld() {
    if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        midpoint_PY_ap_vld = ap_const_logic_1;
    } else {
        midpoint_PY_ap_vld = ap_const_logic_0;
    }
}

void midpoint_line::thread_p_lshr_f_fu_141_p4() {
    p_lshr_f_fu_141_p4 = dx_reg_230.read().range(31, 1);
}

void midpoint_line::thread_p_neg_fu_103_p2() {
    p_neg_fu_103_p2 = (!ap_const_lv32_0.is_01() || !dx_fu_97_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(dx_fu_97_p2.read()));
}

void midpoint_line::thread_p_neg_t_fu_135_p2() {
    p_neg_t_fu_135_p2 = (!ap_const_lv32_0.is_01() || !tmp_1_fu_132_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(tmp_1_fu_132_p1.read()));
}

void midpoint_line::thread_tmp_1_fu_132_p1() {
    tmp_1_fu_132_p1 = esl_zext<32,31>(p_lshr_reg_237.read());
}

void midpoint_line::thread_tmp_2_fu_168_p2() {
    tmp_2_fu_168_p2 = (!dy_fu_119_p2.read().is_01() || !dx_reg_230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(dy_fu_119_p2.read()) - sc_biguint<32>(dx_reg_230.read()));
}

void midpoint_line::thread_tmp_3_fu_173_p2() {
    tmp_3_fu_173_p2 = (!x1_reg_79.read().is_01() || !midpoint_X1.read().is_01())? sc_lv<1>(): (sc_bigint<32>(x1_reg_79.read()) < sc_bigint<32>(midpoint_X1.read()));
}

void midpoint_line::thread_tmp_4_fu_150_p1() {
    tmp_4_fu_150_p1 = esl_zext<32,31>(p_lshr_f_fu_141_p4.read());
}

void midpoint_line::thread_tmp_5_fu_125_p3() {
    tmp_5_fu_125_p3 = dx_reg_230.read().range(31, 31);
}

void midpoint_line::thread_tmp_6_fu_185_p3() {
    tmp_6_fu_185_p3 = d1_reg_70.read().range(31, 31);
}

void midpoint_line::thread_tmp_fu_154_p3() {
    tmp_fu_154_p3 = (!tmp_5_fu_125_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_5_fu_125_p3.read()[0].to_bool())? p_neg_t_fu_135_p2.read(): tmp_4_fu_150_p1.read());
}

void midpoint_line::thread_x_1_fu_178_p2() {
    x_1_fu_178_p2 = (!x1_reg_79.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(x1_reg_79.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void midpoint_line::thread_y_0_s_fu_205_p3() {
    y_0_s_fu_205_p3 = (!tmp_6_fu_185_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_185_p3.read()[0].to_bool())? y1_reg_88.read(): y_1_fu_193_p2.read());
}

void midpoint_line::thread_y_1_fu_193_p2() {
    y_1_fu_193_p2 = (!y1_reg_88.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(y1_reg_88.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void midpoint_line::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(tmp_3_fu_173_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

void midpoint_line::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"midpoint_X0\" :  \"" << midpoint_X0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"midpoint_Y0\" :  \"" << midpoint_Y0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"midpoint_X1\" :  \"" << midpoint_X1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"midpoint_Y1\" :  \"" << midpoint_Y1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"midpoint_PX\" :  \"" << midpoint_PX.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"midpoint_PX_ap_vld\" :  \"" << midpoint_PX_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"midpoint_PY\" :  \"" << midpoint_PY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"midpoint_PY_ap_vld\" :  \"" << midpoint_PY_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

