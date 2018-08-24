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
#include "stdlib.h"

bool CompareResults()
{
  bool status = false;
  int retval = 0;

  retval = system("diff --brief -w Data.dat Gold.dat");
  if (retval != 0) 
  {
    printf("Test failed  !!!\n"); 
  } 
  else 
  {
    printf("Test passed !\n");
    status = true;
  }

  return status;
}

int main(int argc, char* argv[])
{
  std::cout << "TEST BENCH" << std::endl;
  remove("Data.dat");
  //midpoint line3;
  /*X0 = 0;
  Y0 = 5;
  X1 = 8;
  Y1 = 6;*/
  int *x, *y;
  x = new int;
  y = new int;

  int x0,x1,y0,y1;

  x0 = 0;
  y0 = 5;
  x1 = 8;
  y1 = 6;

  //Test

  midpoint(x0,y0,x1,y1,x,y);
  dda(x0,y0,x1,y1,x,y);
  bresenham(x0,y0,x1,y1,x,y);

  CompareResults();
  
  std::cout << "DONE!" << std::endl;

  
  return 0;
}
