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
#include "stdlib.h"

int main(int argc, char* argv[])
{
  std::cout << "Hello World!" << std::endl;

  //midpoint line3;
  /*X0 = 0;
  Y0 = 5;
  X1 = 8;
  Y1 = 6;*/
  int *x, *y;
  x = new int;
  y = new int;
  drawLine(0,5,8,6,x,y);

  std::cout << "End!" << std::endl;

  
  return 0;
}
