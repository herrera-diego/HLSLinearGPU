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
    sc_trace_file *tf = sc_create_vcd_trace_file("tb_top");
    tf->set_time_unit(1, SC_NS);
    Top top("top");
    top.tracing(tf);
    
    sc_start(0,SC_NS);

    cout << "@" << sc_time_stamp()<< endl;
    
    sc_start(1000,SC_NS); 

    cout << "@" << sc_time_stamp()<< endl;

    return 0;
}
