#include <stdio.h>
#include <ctype.h>

int main (){
  char option;
  char mayus;
do {
  printf (" E) Enrol\n Q) Quit\n L) List\n F) Filter\n X) Exit \n\n Choose an option: ");
  scanf (" %c",&option);

  mayus = toupper(option);

  switch (mayus){
  case 'E':
    printf("Enrol\n");
    break;
  case 'Q':
    printf("Quit\n");
    break;
  case 'L':
    printf("List\n");
    break;
  case 'F':
    printf("Filter\n");
    break;
  case 'X':
    printf("Exit\n");
    break;
  default:
    printf("Invalid option\n");
    break;
   }
  }while(mayus!='X');

  
  return 0;
}
