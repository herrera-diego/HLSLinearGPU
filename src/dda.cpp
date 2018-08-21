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



#include "dda.h"

// Generate a random delay (with power-law distribution) to aid testing and stress the protocol

dda::dda(sc_core::sc_module_name module_name)
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

void dda::startDrawing()
{
    start = true;
}

void dda::line()
{
    while(true)
    {
        wait();
        if(start)
        {
            cout << "DDA Start" <<endl;
            int dx = X1 - X0;
            int dy = Y1 - Y0;
        
            // calculate steps required for generating pixels
            int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
        
            // calculate increment in x & y for each steps
            float Xinc = dx / (float) steps;
            float Yinc = dy / (float) steps;
        
            // Put pixel for each step
            float X = X0;
            float Y = Y0;
            //float Xp = X;
            //float Yp = Y;
            for (int i = 0; i <= steps; i++)
            {
                wait();
                PX = round(X);
                PY = round(Y);
                std::cout << PX <<","<< PY <<endl;
                //putpixel (X,Y,RED);  // put pixel at (X,Y)
                X += Xinc;           // increment in x at each step
                Y += Yinc;           // increment in y at each step
                //delay(100);          // for visualization of line-
                                    // generation step by step
            }
            start = false;
        }
    }
}


int dda::abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}
 
void dda::tracing(sc_trace_file *tf)
{
    cout << "[VCD]" << "Add dda Signals to .VCD\n" << endl;
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