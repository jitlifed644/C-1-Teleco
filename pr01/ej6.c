#include <stdio.h>

int main (){
  float real;
  double realDoble;

  real = 25.50;
  realDoble = 25e+100;
  real = realDoble * real;
  fprintf (stdout,"Usando float: %.2f\n\n", real);

  real = 25.50;
  realDoble = realDoble * real;
  fprintf (stdout,"Usando double: %.2f\n", realDoble);
  fprintf (stdout,"En notación científica: %.4e\n", realDoble);

  return 0;
}
