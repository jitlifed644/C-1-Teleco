#include <stdio.h>
void label() {
  printf ("Hola Mundo\n");
  return;
}

int check(){
  char caracter;
  do{
    
  printf ("Are you sure you want to close the app? (Y/N): ");
  scanf (" %c", &caracter);
  }while(caracter !='Y' && caracter!='y'&& caracter !='N' && caracter!='n');
  if (caracter =='Y' || caracter=='y') return 1;
  else  return 0; 
  }

int main(){
  int salir;
  do{
    label();
  salir = check();
  }while (salir!=1);
  return 0;
}
