#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){

  char caracter;
  char array[] = {'E', 'Q', 'L', 'F', 'X'};
  char mayuscula;
  
  fprintf (stdout,"Dame un caracter: ");
  fscanf (stdin, "%c", &caracter);
  mayuscula = toupper(caracter);
  if (strchr(array,mayuscula) == NULL){
  printf ("No es válido\n");
  }
  else {
    fprintf (stdout,"La letra %c en mayusculas es: %c\n",caracter, mayuscula);
  }
    return 0;

}
