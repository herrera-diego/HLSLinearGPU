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

#ifndef __MID_POINT__
#define __MID_POINT__

#include "stdio.h"
#include <iostream>

class midpoint
{
    public:
       
        // This should be used instead of SC_CTOR to enable a custom constructor

        midpoint();

        void line();
        
        int             X0;
        int             Y0;
        int             X1;
        int             Y1;

        int     PX;
        int     PY;
};

#endif //__MID_POINT__
