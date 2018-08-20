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

dda::dda(sc_core::sc_module_name module_name, int x0, int y0, int x1, int y1)
    : sc_module(module_name), X0(x0), X1(x1), Y0(y0), Y1(y1)
{
    
    std::cout<<"DDA"<<endl;
    std::cout<<"X0:"<<X0;
    std::cout<<" Y0:"<<Y0;
    std::cout<<" X1:"<<X1;
    std::cout<<" Y1:"<<Y1<<endl;
    SC_METHOD(line);
        //sensitive << clock_signal.posedge_event();
    
}

void dda::line()
{
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
    for (int i = 0; i <= steps; i++)
    {
        std::cout << X <<","<<Y<<endl;
        //putpixel (X,Y,RED);  // put pixel at (X,Y)
        X += Xinc;           // increment in x at each step
        Y += Yinc;           // increment in y at each step
        //delay(100);          // for visualization of line-
                             // generation step by step
    }
}


int dda::abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}
 
