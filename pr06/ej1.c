#include <stdio.h>

int main() {
  int a;
  int *b;

  b = &a;
  a = 5;
  printf ("a vale: %d\n", a);
  *b = 7;
  printf ("a vale: %d\n", a);
  return 0;}
