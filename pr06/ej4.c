#include <stdio.h>
float rectangulo (float base, float altura, float *dir_area);
int main (){
  float base, altura,area;
  printf("Dame una base: ");
  scanf("%f", &base);
  printf ("Dame una altura: ");
  scanf("%f", &altura);
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
