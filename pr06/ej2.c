#include <stdio.h>
#include <stdlib.h>

int main (void) {
  char nombre[] = "Jacobo";
  char *pc1 = &nombre[0];
  char *pc2 = nombre;
  int *pi1, *pi2, i;
  if (pc1 == pc2)printf ("pc1 y pc2 son iguales\n");
  else printf ("pc1 y pc2 son distintos\n");
  pc1[0] = 'X';
  *(pc2+5) = 'e';
  printf ("El nombre es: %s\n", nombre);
  pi1 = malloc (5 * sizeof(int));
  pi2 = pi1;
  for (i=0; i<5; i++)pi1[i] = i*10+1;
  for (i=0; i<5; i++)printf ("%d ", pi1[i]);
  printf ("\n");
  *(pi2+2) *= 5;pi2 += 3;
  printf ("pi1[2] = %d\n", pi1[2]);
  printf ("pi2 apunta a %d\n", *pi2);
  printf ("Entre pi1 y pi2 hay %ld enteros\n", pi2-pi1);
  printf ("*pi2 -*pi1 vale: %d\n", *pi2 -*pi1);

  return 0;}
