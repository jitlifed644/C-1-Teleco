#include <stdio.h>
#include <string.h>

int main() {
  char cadena[600];
  int longitud;
  
  fprintf (stdout,"Dame una cadena: ");
  scanf ("%s",cadena);

  longitud = strlen(cadena);
  if (longitud<=24 && longitud>=1){
    
     printf ("La cadena tiene %d caracteres\n\n", longitud);
  }
  else{
    printf ("Longitud excesiva\n");
  }
  return 0;
}
