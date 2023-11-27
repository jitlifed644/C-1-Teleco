#include <stdio.h>
#include <ctype.h>

int main (){
  char option;
  char mayus;
  char seleccion;
 
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
    do{
    printf("Are you sure you want to close the app?\n");
    scanf(" %c", &seleccion);
    }while(seleccion != 'N'||seleccion!='n'||seleccion != 'Y'||seleccion!='y');

   

    break;
  default:
    printf("Invalid option\n");
    break;
   }
  }while(seleccion=='Y'&&mayus!='X');

  
  return 0;
}
