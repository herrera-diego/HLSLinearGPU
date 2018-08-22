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


void dda::line()
{   
    std::cout << "DDA Start" << std::endl;
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
        PX = round(X);
        PY = round(Y);
        std::cout << PX <<","<< PY <<std::endl;
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
 