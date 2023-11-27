#include <stdio.h>
#include <ctype.h>
int main (){
  char respuesta;
  do{
  printf ("Are you sure you want to close the app? (Y/N): ");

  scanf (" %c",&respuesta);
  }while(toupper(respuesta) != 'N'&&toupper(respuesta) != 'Y' );
  if (toupper(respuesta)== 'Y'){
    printf("You have chosen Yes \n");
  }
  else{
    printf("You have chosen No\n");
  }
 

  return 0;
}
