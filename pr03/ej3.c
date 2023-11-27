#include <stdio.h>

int main(){
  int num1;
  float cuadrado;
  int i;
  int numrep;
  printf("Introduzca la cantidad de números que quiere probar: ");
  scanf("%d", &numrep);
  i=0;
  while (i<numrep){
    printf("Escribe un número entero: ");
    scanf ("%d", &num1);
    cuadrado=(num1*num1);
    printf("cuadrado de %d = %f\n",num1 ,cuadrado);
    i++;
  }
  


  return 0;
}
