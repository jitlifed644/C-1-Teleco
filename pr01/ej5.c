#include <stdio.h>

int main(){
  short enteroCorto = 30000;
  int entero = 3000000;
  float real = 3e9;

  fprintf (stdout, "enteroCorto: %d\n", enteroCorto);
  fprintf (stdout, "entero: %d\n", entero);
  fprintf (stdout, "real en punto flotante: %.2f\n", real);
  fprintf  (stdout, "real en notación científica: %.2e\n\n", real);

  enteroCorto = entero;
  fprintf (stdout, "Entero: %hd\n\n", entero);

  entero = real;
  fprintf (stdout, "enteroCorto: %d\n\n", enteroCorto);

  entero = 3000000;
  real = entero;
  fprintf (stdout, "entero: %d\n", entero);
  fprintf (stdout,"real: %.2f\n\n", real);

  entero =1234567892;
  real = entero;
  fprintf (stdout,"entero: %d\n", entero);
  fprintf (stdout,"real: %.2f\n",real);
  fprintf (stdout,"%.9e\n", real);

  return 0;
}
