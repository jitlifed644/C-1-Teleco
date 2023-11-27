#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 10
#define n -10
int main(){
  int indice;
  int numeros[5];

  srand(time(NULL));

  for(indice=0; indice<5; indice++){
    numeros[indice]=rand()%(m-n+1)+n;
  }
  for (indice = 0; indice<5; indice++){
    printf("%3d\n", numeros[indice]);
  }
  return 0;
}
