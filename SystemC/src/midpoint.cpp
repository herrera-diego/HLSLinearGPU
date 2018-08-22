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



#include "midpoint.h"

// Generate a random delay (with power-law distribution) to aid testing and stress the protocol

midpoint::midpoint(sc_core::sc_module_name module_name)
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

void midpoint::startDrawing()
{
    start = true;
}


void midpoint::line()
{
    while(true)
    {
        wait();
        if(start)
        {
            cout << "Mid Point Start" <<endl;
            int dx = X1 - X0;
            int dy = Y1 - Y0;
        
            // initial value of decision parameter d
            int d = dy - (dx/2);
            int x = X0, y = Y0;
        
            // Plot initial given point
            // putpixel(x,y) can be used to print pixel
            // of line in graphics
            cout << x << "," << y << "\n";
        
            // iterate through value of X
            while (x < X1)
            {
                wait();

                x++;
        
                // E or East is chosen
                if (d < 0)
                    d = d + dy;
        
                // NE or North East is chosen
                else
                {
                    d += (dy - dx);
                    y++;
                }
        
                // Plot intermediate points
                // putpixel(x,y) is used to print pixel
                // of line in graphics
                PX = x;
                PY = y;
                cout << PX << "," << PY << endl;
            }
            start =false;
        }
    }
}

void midpoint::tracing(sc_trace_file *tf)
{
    cout << "[VCD]" << "Add midpoint Signals to .VCD\n" << endl;
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
 
