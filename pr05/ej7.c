#include <stdio.h>
#include <ctype.h>
void label(const char mensaje[]);
int check(const char mensajecheck[]);
void border(const char caracter);


int p_enrol();
int p_quit();
int p_filter();
int p_list();

int main (){
  char option;
  char mayus;
  
  int salir;
do {
  border('-');
  label("GAMER PROJECT\n");
  border('-');
  printf (" E) Enrol\n Q) Quit\n L) List\n F) Filter\n X) Exit \n\n Choose an option: ");
  scanf (" %c",&option);

  mayus = toupper(option);

  switch (mayus){
  case 'E':
    p_enrol();
    break;
  case 'Q':
    p_quit();
    break;
  case 'L':
    p_list();
    break;
  case 'F':
    p_filter();
    break;
  case 'X':
   
    
    salir = check("Está usted seguro?");
     break;
  default:
    printf("Invalid option\n");
    break;
   }
  }while(salir != 1);

  
  return 0;
}


void label(const char mensaje[]) {
  
  printf ("%s",mensaje );
  return;
}
int check(const char caractercheck[]){
  char caracter;
  do{
    label("");
    printf (" %s", caractercheck);
  scanf (" %c", &caracter);
  }while(caracter !='Y' && caracter!='y'&& caracter !='N' && caracter!='n');
  if (caracter =='Y' || caracter=='y') return 1;
  return 0;
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


 
int p_enrol(){
  
printf("Enrol\n");
 return 0;
}
int p_quit(){
printf("Quit\n");
 return 0;
}
int p_filter(){
printf("Filter\n");
 return 0;
}
int p_list(){
printf("List\n");
 return 0;
}
