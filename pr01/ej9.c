#include <stdio.h>
#include <string.h>

int main() {
  char cadena[50];
  int longitud;
  
  fprintf (stdout,"\nDame una cadena: ");
  fscanf (stdin, "%s",cadena);

  longitud = strlen(cadena);
  fprintf (stdout, "La cadena tiene %d caracteres\n\n", longitud);
  
  return 0;
}
