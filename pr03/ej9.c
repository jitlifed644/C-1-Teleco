#include <stdio.h>
#include <string.h>

int main() {
  char cadena[600];
  int longitud;
  int numfallos;
  numfallos=0;
    do{
  fprintf (stdout,"Dame una cadena: ");
  scanf ("%s",cadena);
  longitud = strlen(cadena);
  
  if (longitud>24) {
    numfallos++;
  
    if (numfallos>=5)
      break;
  }
  
  else {
       printf ("La cadena tiene %d caracteres\n\n", longitud);
    }
  
  }while(longitud>24);
  
 

  return 0;
}
