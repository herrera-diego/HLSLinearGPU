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


#include "dda.h"


int main(int argc, char* argv[])
{
  std::cout << "Hello World!" << std::endl;

  
  dda line1;
  line1.X0 = 0;
  line1.Y0 = 5;
  line1.X1 = 8;
  line1.Y1 = 6;
  line1.line();

  std::cout << "End!" << std::endl;

  
  return 0;
}
