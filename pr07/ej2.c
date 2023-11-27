#include <stdio.h>
#include <stdlib.h>
float rectangulo (float base, float altura, float *dir_area);
int main (int argc, char *argv[]){
  float base, altura, area;
  base= atof(argv[1]);
  altura= atof(argv[2]);
  rectangulo(base, altura,&area);
  printf("Altura:     %.2f cm\n", altura);
  printf("Base:      %.2f cm\n", base);
  printf("Area:     %.2f cm x cm\n", area);
  printf("Perímetro: %3.2f cm\n", rectangulo(base, altura,&area));
  return 0;
}
float rectangulo (float base, float altura, float *dir_area){
  *dir_area = base*altura;
  float perimetro = (base + altura)*2;
  *dir_area=base*altura;
  return perimetro;
}
