#include <stdio.h>
#include <math.h>
int main() {

  int num;
  float raiz;

  fprintf (stdout,"Introduzca un número entero:\n");
  fscanf (stdin,"%d", &num);
  raiz = sqrt(num);
  fprintf (stdout, "\nSu raíz es: %f\n", raiz);


  return 0;
}
