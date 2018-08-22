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

#ifndef __TOP_H__
#define __TOP_H__

#include "systemc.h"
#include "dda.h"
#include "bresenham.h"
#include "midpoint.h"

SC_MODULE(Top)
{
    dda         line1{"line1"};
    bresenham   line2{"line2"};
    midpoint    line3{"line3"};

    sc_in_clk   clk;
    sc_in<int>  X0;
    sc_in<int>  Y0;
    sc_in<int>  X1;
    sc_in<int>  Y1;

    void tracing(sc_trace_file *tf)
    {
        cout << "[VCD]" << "Add Top Signals to .VCD\n" << endl;
        const std::string str = this->name();
    
        // Dump local signals
        sc_trace(tf, this->clk, str+".clk");
        sc_trace(tf, this->X0, str+".X0");
        sc_trace(tf, this->Y0, str+".Y0");
        sc_trace(tf, this->X1, str+".X1");
        sc_trace(tf, this->Y1, str+".Y1");
        line1.tracing(tf);
        line2.tracing(tf);
        line3.tracing(tf);
    }

    SC_CTOR(Top)
    {
        std::cout <<"Top"<<endl;
        line1.clk(clk);
        line1.X0(X0);
        line1.Y0(Y0);
        line1.X1(X1);
        line1.Y1(Y1);

        line2.clk(clk);
        line2.X0(X0);
        line2.Y0(Y0);
        line2.X1(X1);
        line2.Y1(Y1);

        line3.clk(clk);
        line3.X0(X0);
        line3.Y0(Y0);
        line3.X1(X1);
        line3.Y1(Y1);
    }
};   
#endif //__TOP_H__

