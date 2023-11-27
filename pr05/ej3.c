#include <stdio.h>
void label() {
  printf ("GAMER PROJECT\n");
  return;
}
char border(char caracter){
  int contador=0;
  do{
    printf("%c", caracter);
    contador++;
  }while(contador<50);
  printf("\n");
}

int check(){
  char caracter;
  do{
    border('*');
    label();
    border('*');
  printf ("Are you sure you want to close the app? (Y/N): ");
  scanf (" %c", &caracter);
  }while(caracter !='Y' && caracter!='y'&& caracter !='N' && caracter!='n');
  if (caracter =='Y' || caracter=='y') return 1;
  else  return 0; 
  }


int main(){
  int salir;
  do{
 
  salir = check();
    }while (salir!=1);
  return 0;
}
