// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _image_filter_HH_
#define _image_filter_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Block_Mat_exit47_pro.h"
#include "AXIvideo2Mat.h"
#include "CvtColor_1.h"
#include "CvtColor.h"
#include "Mat2AXIvideo.h"
#include "fifo_w32_d2_A.h"
#include "fifo_w32_d4_A.h"
#include "fifo_w32_d5_A.h"
#include "fifo_w8_d2_A.h"
#include "start_for_CvtColoeOg.h"
#include "start_for_Mat2AXIfYi.h"
#include "start_for_CvtColog8j.h"

namespace ap_rtl {

struct image_filter : public sc_module {
    // Port declarations 26
    sc_in< sc_lv<24> > INPUT_STREAM_TDATA;
    sc_in< sc_lv<3> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<3> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_out< sc_lv<24> > OUTPUT_STREAM_TDATA;
    sc_out< sc_lv<3> > OUTPUT_STREAM_TKEEP;
    sc_out< sc_lv<3> > OUTPUT_STREAM_TSTRB;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TUSER;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TLAST;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TID;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TDEST;
    sc_in< sc_lv<32> > rows;
    sc_in< sc_lv<32> > cols;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_out< sc_logic > OUTPUT_STREAM_TVALID;
    sc_in< sc_logic > OUTPUT_STREAM_TREADY;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    image_filter(sc_module_name name);
    SC_HAS_PROCESS(image_filter);

    ~image_filter();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    Block_Mat_exit47_pro* Block_Mat_exit47_pro_U0;
    AXIvideo2Mat* AXIvideo2Mat_U0;
    CvtColor_1* CvtColor_1_U0;
    CvtColor* CvtColor_U0;
    Mat2AXIvideo* Mat2AXIvideo_U0;
    fifo_w32_d2_A* img_0_rows_V_c_U;
    fifo_w32_d2_A* img_0_cols_V_c_U;
    fifo_w32_d4_A* img_1_rows_V_c_U;
    fifo_w32_d4_A* img_1_cols_V_c_U;
    fifo_w32_d5_A* img_2_rows_V_c_U;
    fifo_w32_d5_A* img_2_cols_V_c_U;
    fifo_w8_d2_A* img_0_data_stream_0_U;
    fifo_w8_d2_A* img_0_data_stream_1_U;
    fifo_w8_d2_A* img_0_data_stream_2_U;
    fifo_w32_d2_A* img_0_rows_V_c17_U;
    fifo_w32_d2_A* img_0_cols_V_c18_U;
    fifo_w8_d2_A* img_1_data_stream_0_U;
    fifo_w8_d2_A* img_2_data_stream_0_U;
    fifo_w8_d2_A* img_2_data_stream_1_U;
    fifo_w8_d2_A* img_2_data_stream_2_U;
    start_for_CvtColoeOg* start_for_CvtColoeOg_U;
    start_for_Mat2AXIfYi* start_for_Mat2AXIfYi_U;
    start_for_CvtColog8j* start_for_CvtColog8j_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_ap_start;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_start_full_n;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_ap_done;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_ap_continue;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_ap_idle;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_ap_ready;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_start_out;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_start_write;
    sc_signal< sc_lv<32> > Block_Mat_exit47_pro_U0_img_0_rows_V_out_din;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_img_0_rows_V_out_write;
    sc_signal< sc_lv<32> > Block_Mat_exit47_pro_U0_img_0_cols_V_out_din;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_img_0_cols_V_out_write;
    sc_signal< sc_lv<32> > Block_Mat_exit47_pro_U0_img_1_rows_V_out_din;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_img_1_rows_V_out_write;
    sc_signal< sc_lv<32> > Block_Mat_exit47_pro_U0_img_1_cols_V_out_din;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_img_1_cols_V_out_write;
    sc_signal< sc_lv<32> > Block_Mat_exit47_pro_U0_img_2_rows_V_out_din;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_img_2_rows_V_out_write;
    sc_signal< sc_lv<32> > Block_Mat_exit47_pro_U0_img_2_cols_V_out_din;
    sc_signal< sc_logic > Block_Mat_exit47_pro_U0_img_2_cols_V_out_write;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_start;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_done;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_continue;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_idle;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_out;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_write;
    sc_signal< sc_logic > AXIvideo2Mat_U0_INPUT_STREAM_TREADY;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_rows_V_read;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_cols_V_read;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_0_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_0_V_write;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_1_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_1_V_write;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_2_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_2_V_write;
    sc_signal< sc_lv<32> > AXIvideo2Mat_U0_img_rows_V_out_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_rows_V_out_write;
    sc_signal< sc_lv<32> > AXIvideo2Mat_U0_img_cols_V_out_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_cols_V_out_write;
    sc_signal< sc_logic > CvtColor_1_U0_ap_start;
    sc_signal< sc_logic > CvtColor_1_U0_ap_done;
    sc_signal< sc_logic > CvtColor_1_U0_ap_continue;
    sc_signal< sc_logic > CvtColor_1_U0_ap_idle;
    sc_signal< sc_logic > CvtColor_1_U0_ap_ready;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_rows_V_read;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_cols_V_read;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_data_stream_0_V_read;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_data_stream_1_V_read;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_data_stream_2_V_read;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > CvtColor_U0_ap_start;
    sc_signal< sc_logic > CvtColor_U0_ap_done;
    sc_signal< sc_logic > CvtColor_U0_ap_continue;
    sc_signal< sc_logic > CvtColor_U0_ap_idle;
    sc_signal< sc_logic > CvtColor_U0_ap_ready;
    sc_signal< sc_logic > CvtColor_U0_p_src_rows_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_cols_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_V_read;
    sc_signal< sc_lv<8> > CvtColor_U0_p_dst_data_stream_0_V_din;
    sc_signal< sc_logic > CvtColor_U0_p_dst_data_stream_0_V_write;
    sc_signal< sc_lv<8> > CvtColor_U0_p_dst_data_stream_1_V_din;
    sc_signal< sc_logic > CvtColor_U0_p_dst_data_stream_1_V_write;
    sc_signal< sc_lv<8> > CvtColor_U0_p_dst_data_stream_2_V_din;
    sc_signal< sc_logic > CvtColor_U0_p_dst_data_stream_2_V_write;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_start;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_done;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_continue;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_idle;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_ready;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_rows_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_cols_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_0_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_1_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_2_V_read;
    sc_signal< sc_lv<24> > Mat2AXIvideo_U0_OUTPUT_STREAM_TDATA;
    sc_signal< sc_logic > Mat2AXIvideo_U0_OUTPUT_STREAM_TVALID;
    sc_signal< sc_lv<3> > Mat2AXIvideo_U0_OUTPUT_STREAM_TKEEP;
    sc_signal< sc_lv<3> > Mat2AXIvideo_U0_OUTPUT_STREAM_TSTRB;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TUSER;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TLAST;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TID;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TDEST;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > img_0_rows_V_c_full_n;
    sc_signal< sc_lv<32> > img_0_rows_V_c_dout;
    sc_signal< sc_logic > img_0_rows_V_c_empty_n;
    sc_signal< sc_logic > img_0_cols_V_c_full_n;
    sc_signal< sc_lv<32> > img_0_cols_V_c_dout;
    sc_signal< sc_logic > img_0_cols_V_c_empty_n;
    sc_signal< sc_logic > img_1_rows_V_c_full_n;
    sc_signal< sc_lv<32> > img_1_rows_V_c_dout;
    sc_signal< sc_logic > img_1_rows_V_c_empty_n;
    sc_signal< sc_logic > img_1_cols_V_c_full_n;
    sc_signal< sc_lv<32> > img_1_cols_V_c_dout;
    sc_signal< sc_logic > img_1_cols_V_c_empty_n;
    sc_signal< sc_logic > img_2_rows_V_c_full_n;
    sc_signal< sc_lv<32> > img_2_rows_V_c_dout;
    sc_signal< sc_logic > img_2_rows_V_c_empty_n;
    sc_signal< sc_logic > img_2_cols_V_c_full_n;
    sc_signal< sc_lv<32> > img_2_cols_V_c_dout;
    sc_signal< sc_logic > img_2_cols_V_c_empty_n;
    sc_signal< sc_logic > img_0_data_stream_0_full_n;
    sc_signal< sc_lv<8> > img_0_data_stream_0_dout;
    sc_signal< sc_logic > img_0_data_stream_0_empty_n;
    sc_signal< sc_logic > img_0_data_stream_1_full_n;
    sc_signal< sc_lv<8> > img_0_data_stream_1_dout;
    sc_signal< sc_logic > img_0_data_stream_1_empty_n;
    sc_signal< sc_logic > img_0_data_stream_2_full_n;
    sc_signal< sc_lv<8> > img_0_data_stream_2_dout;
    sc_signal< sc_logic > img_0_data_stream_2_empty_n;
    sc_signal< sc_logic > img_0_rows_V_c17_full_n;
    sc_signal< sc_lv<32> > img_0_rows_V_c17_dout;
    sc_signal< sc_logic > img_0_rows_V_c17_empty_n;
    sc_signal< sc_logic > img_0_cols_V_c18_full_n;
    sc_signal< sc_lv<32> > img_0_cols_V_c18_dout;
    sc_signal< sc_logic > img_0_cols_V_c18_empty_n;
    sc_signal< sc_logic > img_1_data_stream_0_full_n;
    sc_signal< sc_lv<8> > img_1_data_stream_0_dout;
    sc_signal< sc_logic > img_1_data_stream_0_empty_n;
    sc_signal< sc_logic > img_2_data_stream_0_full_n;
    sc_signal< sc_lv<8> > img_2_data_stream_0_dout;
    sc_signal< sc_logic > img_2_data_stream_0_empty_n;
    sc_signal< sc_logic > img_2_data_stream_1_full_n;
    sc_signal< sc_lv<8> > img_2_data_stream_1_dout;
    sc_signal< sc_logic > img_2_data_stream_1_empty_n;
    sc_signal< sc_logic > img_2_data_stream_2_full_n;
    sc_signal< sc_lv<8> > img_2_data_stream_2_dout;
    sc_signal< sc_logic > img_2_data_stream_2_empty_n;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > ap_sync_reg_AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_lv<2> > AXIvideo2Mat_U0_ap_ready_count;
    sc_signal< sc_logic > ap_sync_reg_Block_Mat_exit47_pro_U0_ap_ready;
    sc_signal< sc_logic > ap_sync_Block_Mat_exit47_pro_U0_ap_ready;
    sc_signal< sc_lv<2> > Block_Mat_exit47_pro_U0_ap_ready_count;
    sc_signal< sc_lv<1> > start_for_CvtColor_U0_din;
    sc_signal< sc_logic > start_for_CvtColor_U0_full_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_U0_dout;
    sc_signal< sc_logic > start_for_CvtColor_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Mat2AXIvideo_U0_din;
    sc_signal< sc_logic > start_for_Mat2AXIvideo_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Mat2AXIvideo_U0_dout;
    sc_signal< sc_logic > start_for_Mat2AXIvideo_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_1_U0_din;
    sc_signal< sc_logic > start_for_CvtColor_1_U0_full_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_1_U0_dout;
    sc_signal< sc_logic > start_for_CvtColor_1_U0_empty_n;
    sc_signal< sc_logic > CvtColor_1_U0_start_full_n;
    sc_signal< sc_logic > CvtColor_1_U0_start_write;
    sc_signal< sc_logic > CvtColor_U0_start_full_n;
    sc_signal< sc_logic > CvtColor_U0_start_write;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_full_n;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_write;
    static const sc_lv<24> ap_const_lv24_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_AXIvideo2Mat_U0_ap_continue();
    void thread_AXIvideo2Mat_U0_ap_start();
    void thread_Block_Mat_exit47_pro_U0_ap_continue();
    void thread_Block_Mat_exit47_pro_U0_ap_start();
    void thread_Block_Mat_exit47_pro_U0_start_full_n();
    void thread_CvtColor_1_U0_ap_continue();
    void thread_CvtColor_1_U0_ap_start();
    void thread_CvtColor_1_U0_start_full_n();
    void thread_CvtColor_1_U0_start_write();
    void thread_CvtColor_U0_ap_continue();
    void thread_CvtColor_U0_ap_start();
    void thread_CvtColor_U0_start_full_n();
    void thread_CvtColor_U0_start_write();
    void thread_INPUT_STREAM_TREADY();
    void thread_Mat2AXIvideo_U0_ap_continue();
    void thread_Mat2AXIvideo_U0_ap_start();
    void thread_Mat2AXIvideo_U0_start_full_n();
    void thread_Mat2AXIvideo_U0_start_write();
    void thread_OUTPUT_STREAM_TDATA();
    void thread_OUTPUT_STREAM_TDEST();
    void thread_OUTPUT_STREAM_TID();
    void thread_OUTPUT_STREAM_TKEEP();
    void thread_OUTPUT_STREAM_TLAST();
    void thread_OUTPUT_STREAM_TSTRB();
    void thread_OUTPUT_STREAM_TUSER();
    void thread_OUTPUT_STREAM_TVALID();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_AXIvideo2Mat_U0_ap_ready();
    void thread_ap_sync_Block_Mat_exit47_pro_U0_ap_ready();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_start_for_CvtColor_1_U0_din();
    void thread_start_for_CvtColor_U0_din();
    void thread_start_for_Mat2AXIvideo_U0_din();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
