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


void bresenham::line()
{
    std::cout << "Bresenham Start" <<std::endl;
    int m_new = 2 * (Y1 - Y0);
    int slope_error_new = m_new - (X1 - X0);
    for (int x = X0, y = Y0; x <= X1; x++)
    {
        PX = x;
        PY = y;
        std::cout << PX << "," << PY << std::endl;
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
}
