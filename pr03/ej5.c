#include <stdio.h>
#include <string.h>

int main() {
  char cadena[];
  int longitud;
  do{ 
  fprintf (stdout,"Dame una cadena: ");
  scanf ("%s",cadena);

  longitud = strlen(cadena);
  }while(longitud>24);
    
  printf ("La cadena tiene %d caracteres\n\n", longitud);

  return 0;
}
