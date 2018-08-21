/*******************************************************
 *  Instituto Tecnologico de Costa Rica
 *
 *  Diseño de Alto Nivel de Sistema Electrónicos
 *
 *  Proyecto 4 (Grupo 1)
 *
 *  Mario Castro    200827325
 *  Diego Herrera   200324558
 *  Fernando París  200510153
 *  Esteban Rivera  2018319491
 *  Kevin Víquez    200944341
 *******************************************************/

#include "top.h"

int sc_main(int argc, char* argv[])   
{
    sc_clock tb_clk("tb_clk", 50, SC_NS, 0.5);
    sc_signal<int>             X0;
    sc_signal<int>             Y0;
    sc_signal<int>             X1;
    sc_signal<int>             Y1;

    sc_trace_file *tf = sc_create_vcd_trace_file("tb_top");
    tf->set_time_unit(1, SC_NS);
    Top top("Top");
    top.clk(tb_clk);
    top.X0(X0);
    top.Y0(Y0);
    top.X1(X1);
    top.Y1(Y1);
    top.tracing(tf);
    
    sc_start(0,SC_NS);

    cout << "@" << sc_time_stamp()<< endl;
    sc_start(50,SC_NS); 
    X0.write(0);
    Y0.write(5);
    X1.write(8);
    Y1.write(6);

    sc_start(500,SC_NS); 
    X0.write(4);
    Y0.write(1);
    X1.write(9);
    Y1.write(11);
    sc_start(1000,SC_NS); 

    cout << "@" << sc_time_stamp()<< endl;

    return 0;
}
