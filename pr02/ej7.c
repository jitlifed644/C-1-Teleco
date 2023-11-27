#include <stdio.h>
#include <string.h>
int main(){
  float num1;
  float num2;
  char caracter;
  float calculo;
  

  printf ("Dame una operación: ");
  scanf ("%f", &num1);
  scanf (" %c", &caracter);
  scanf ("%f", &num2);
  

    switch(caracter){
    case '+':
      calculo=num1+num2;
      printf("Resultado: %.2f\n", calculo);
      break;
    case '-':
      calculo=num1-num2;
      printf("Resultado: %.2f\n", calculo);
      break;
    case '*':
      calculo=num1*num2;
      printf("Resultado: %.2f\n", calculo);
      break;
    case '/':
      calculo=num1/num2;
      printf("Resultado: %.2f\n", calculo);
      break;
    default:
      printf("No es válido, introduzca una operación \"+\" \"-\" \"*\" \"/\"\n");
      break;
    }
    return 0;
}
