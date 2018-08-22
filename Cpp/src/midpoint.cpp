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


void drawLine(int x0, int y0, int x1, int y1, int *xp, int *yp)
{
    //int PX;
    //int PY;

    std::cout << "Mid Point Start" <<std::endl;
    int dx = x1 - x0;
    int dy = y1 - y0;

    // initial value of decision parameter d
    int d = dy - (dx/2);
    int x = x0, y = y0;

    int xi =0;
    int yi =0;

    // Plot initial given point
    // putpixel(x,y) can be used to print pixel
    // of line in graphics
    std::cout << x << "," << y << "\n";

    // iterate through value of X
    while (x < x1)
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
        xp[xi] = x;
        yp[yi] = y;
        putPixel(xp[xi], yp[yi]);
    }
}

void putPixel(int x, int y)
{
	std::cout << x << "," << y << std::endl;
}

