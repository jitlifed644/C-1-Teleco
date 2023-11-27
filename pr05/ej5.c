#include <stdio.h>

void label();
void border(char caracter);
int check();



int main(){
  int salir;
  do{
 
  salir = check();
    }while (salir!=1);
  return 0;
}

void label() {
  printf ("GAMER PROJECT\n");
  return;
}
void border(char caracter){
  int contador=0;
  do{
    printf("%c", caracter);
    contador++;
  }while(contador<50);
  printf("\n");

  return;
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


