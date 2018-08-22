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
#include "stdio.h"
#include <iostream>

void midpoint::line()
{
    
    std::cout << "Mid Point Start" <<std::endl;
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    // initial value of decision parameter d
    int d = dy - (dx/2);
    int x = X0, y = Y0;

    // Plot initial given point
    // putpixel(x,y) can be used to print pixel
    // of line in graphics
    std::cout << x << "," << y << "\n";

    // iterate through value of X
    while (x < X1)
    {
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
        std::cout << PX << "," << PY << std::endl;
    }
}

