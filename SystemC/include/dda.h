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

#ifndef __DDA__
#define __DDA__

#include "systemc.h"

class dda: public sc_module
{
    public:
       
        // This should be used instead of SC_CTOR to enable a custom constructor
        SC_HAS_PROCESS(dda);

        dda(sc_core::sc_module_name module_name);

        void line();
        void startDrawing();
        void tracing(sc_trace_file *tf);
        int abs (int n);

        bool            start;

        sc_in<int>             X0;
        sc_in<int>             Y0;
        sc_in<int>             X1;
        sc_in<int>             Y1;

        int             PX;
        int             PY;

        sc_in_clk       clk;
};

#endif //__DDA__
