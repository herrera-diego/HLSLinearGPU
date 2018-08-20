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

#ifndef __TOP_H__
#define __TOP_H__

#include "systemc.h"
#include "dda.h"

SC_MODULE(Top)
{
    dda *line1;

    SC_CTOR(Top)
    {
        std::cout <<"Test"<<endl;
        line1 = new dda("line1",0,5,8,6);
    }
};   
#endif //__TOP_H__

