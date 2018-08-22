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

int main(int argc, char* argv[])
{
  std::cout << "Hello World!" << std::endl;

  midpoint line3;
  line3.X0 = 0;
  line3.Y0 = 5;
  line3.X1 = 8;
  line3.Y1 = 6;
  line3.line();


  std::cout << "End!" << std::endl;

  
  return 0;
}
