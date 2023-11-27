#include <stdio.h>

int main(){
  int numlineas;
  int i;
  printf ("Dame el número de lineas: ");
  scanf("%d", &numlineas);
  for(i=0;i<numlineas;i++){
    printf("--------------------------\n");
  }
}
