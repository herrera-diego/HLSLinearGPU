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



#include "bresenham.h"

// Generate a random delay (with power-law distribution) to aid testing and stress the protocol

bresenham::bresenham(sc_core::sc_module_name module_name)
    : sc_module(module_name)
{
    start = true;
    SC_THREAD(line);
        sensitive << clk;
    SC_METHOD(startDrawing);
        sensitive<<X0;
        sensitive<<Y0;
        sensitive<<X1;
        sensitive<<Y1;
}

void bresenham::startDrawing()
{
    start = true;
}

void bresenham::line()
{
    while(true)
    {
        wait();
        if(start)
        {
            cout << "Bresenham Start" <<endl;
            int m_new = 2 * (Y1 - Y0);
            int slope_error_new = m_new - (X1 - X0);
            for (int x = X0, y = Y0; x <= X1; x++)
            {
                wait();
                PX = x;
                PY = y;
                cout << PX << "," << PY <<endl;
                // Add slope to increment angle formed
                slope_error_new += m_new;

                // Slope error reached limit, time to
                // increment y and update slope error.
                if (slope_error_new >= 0)
                {
                    y++;
                    slope_error_new  -= 2 * (X1 - X0);
                }
            }
            start = false;
        }
    }
}

 
void bresenham::tracing(sc_trace_file *tf)
{
    cout << "[VCD]" << "Add bresenham Signals to .VCD\n" << endl;
    const std::string str = this->name();
    
    // Dump local signals
    sc_trace(tf, this->clk, str+".clk");
    sc_trace(tf, this->X0, str+".X0");
    sc_trace(tf, this->Y0, str+".Y0");
    sc_trace(tf, this->X1, str+".X1");
    sc_trace(tf, this->Y1, str+".Y1");
    sc_trace(tf, this->PX, str+".PX");
    sc_trace(tf, this->PY, str+".PY");
}