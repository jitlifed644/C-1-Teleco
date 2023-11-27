#include <stdio.h>
#include <math.h>

int main (){
  int num;
  float raiz;
  do{
  printf ("Introduzca su número[0, 1000]: ");

  scanf ("%d", &num);
  
 
  
  }while(num>=1000 || num <= 0);
  raiz = sqrt(num);
  printf ("La raiz de su número es: %f \n", raiz);
  return 0;
}
