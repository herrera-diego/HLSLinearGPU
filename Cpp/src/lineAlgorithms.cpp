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



#include "lineAlgorithms.h"


void midpoint(int x0, int y0, int x1, int y1, int *xp, int *yp)
{
    //int PX;
    //int PY;
    int xi =0;
    int yi =0;

    std::cout << "Mid Point Start" <<std::endl;
    int dx = x1 - x0;
    int dy = y1 - y0;

    // initial value of decision parameter d
    int d = dy - (dx/2);
    int x = x0, y = y0;

   

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
        xi++;
        yi++;
    }
}

void bresenham(int x0, int y0, int x1, int y1, int *xp, int *yp)
{
    int xi =0;
    int yi =0;

    std::cout << "Bresenham Start" <<std::endl;
    int m_new = 2 * (y1 - y0);
    int slope_error_new = m_new - (x1 - x0);
    for (int x = x0, y = y0; x <= x1; x++)
    {
        // Add slope to increment angle formed
        slope_error_new += m_new;

        // Slope error reached limit, time to
        // increment y and update slope error.
        if (slope_error_new >= 0)
        {
            y++;
            slope_error_new  -= 2 * (x1 - x0);
        }

        xp[xi] = x;
        yp[yi] = y;
        putPixel(xp[xi], yp[yi]);
        xi++;
        yi++;
    }
}

void dda(int x0, int y0, int x1, int y1, int *xp, int *yp)
{   
    int xi =0;
    int yi =0;

    std::cout << "DDA Start" << std::endl;
    int dx = x1 - x0;
    int dy = y1 - y0;

    // calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // calculate increment in x & y for each steps
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    // Put pixel for each step
    float X = x0;
    float Y = y0;
    //float Xp = X;
    //float Yp = Y;
    for (int i = 0; i <= steps; i++)
    {
        xp[xi] = std::round(X);
        yp[yi] = std::round(Y);
        std::cout << xp[xi] <<","<< yp[yi] <<std::endl;
        //putpixel (X,Y,RED);  // put pixel at (X,Y)
        X += Xinc;           // increment in x at each step
        Y += Yinc;           // increment in y at each step
        //delay(100);          // for visualization of line-
                            // generation step by step
    }
}


int abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}


void putPixel(int x, int y)
{
	std::cout << x << "," << y << std::endl;
}

