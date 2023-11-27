#include <stdio.h>

int main(){
  int entero;
  float real;

  entero = 4;
  real = entero/5;
  fprintf (stdout, "Cociente = %.2f\n", real);

  real = (1.0*entero)/5;
  fprintf (stdout, "División1 = %.2f\n", real);

   real = entero/5.0;
   fprintf (stdout, "División2 = %.2f\n", real);

  real = 4.7;
  entero = real;
  fprintf (stdout, "Entero = %d\n", entero);

  return 0;
}
