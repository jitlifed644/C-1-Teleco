#include <stdio.h>
#include <math.h>

int main (){
  int num;
  float raiz;
  printf ("Introduzca su número[0, 1000]: ");

  scanf ("%d", &num);
  
  raiz = sqrt(num);
  if (num<=1000 && num >= 0){

    printf ("La raiz de su número es: %f \n", raiz);
  }
  else {
    printf ("El valor no es válido\n");
  }
  return 0;
}
