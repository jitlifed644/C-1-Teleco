#include <stdio.h>
#include <ctype.h>

int main (){

  char caracter;
  char mayuscula;

  fprintf (stdout,"Dame un caracter: ");
  fscanf (stdin, "%c", &caracter);

  mayuscula = toupper(caracter);
  
  fprintf (stdout,"La letra %c en mayusculas es: %c\n",caracter, mayuscula);

    return 0;

}
