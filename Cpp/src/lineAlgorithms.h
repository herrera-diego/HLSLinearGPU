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

#ifndef __LINE_ALGORITHMS__
#define __LINE_ALGORITHMS__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void dda(int x0, int y0, int x1, int y1, int *x, int *y);
void bresenham(int x0, int y0, int x1, int y1, int *x, int *y);       
void midpoint(int x0, int y0, int x1, int y1, int *x, int *y);
void putPixel(int x, int y);
int abs (int n);
int round(float x);



#endif //__LINE_ALGORITHMS__
