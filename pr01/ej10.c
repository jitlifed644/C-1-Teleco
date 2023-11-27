#include <stdio.h>
#include <math.h>
int main (){
  int base;
  int altura;
  float hipotenusa;
  float area;
  float perimetro;

  printf ("Dame la base: ");
  scanf ("%d", &base);
  printf ("Dame la altura: ");
  scanf ("%d", &altura);

  area=(base*altura)/2.00;
  hipotenusa = sqrt((base*base)+(altura*altura));
  perimetro = hipotenusa + base + altura;

    
  printf("Base:      %2d    cm\n", base);
  printf("Altura:    %2d    cm\n", altura);
  printf("Area:      %5.2f cm²\n", area);
  printf("Perímetro: %5.2f cm\n", perimetro);

  return 0;
}
