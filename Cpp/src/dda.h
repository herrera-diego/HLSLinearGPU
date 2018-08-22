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

#include <stdio.h>
#include <math.h>
#include <iostream>

class dda
{
    public:

        void line();
        int abs(int n);
        
        int             X0;
        int             Y0;
        int             X1;
        int             Y1;

        int     PX;
        int     PY;
};


#endif //__DDA__
