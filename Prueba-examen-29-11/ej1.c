#include <stdio.h>
#include <ctype.h>
#include <string.h>
void label(const char mensaje[]);
int check(const char mensajecheck[]);
void border(const char caracter);
void get_string (const char *mensaje, char *palabra);
int get_integer (const char *mensaje);
char get_character (const char *mensaje, const char *pattern);
int read_integer(int min, int max, const char *mensaje);

int p_enrol();
int p_quit();
int p_filter();
int p_list();

int main (){

  char mayus;
  
  int salir;
do {
  border('-');
  label("GAMER PROJECT\n");
  border('-');
  printf (" E) Enrol\n Q) Quit\n L) List\n F) Filter\n X) Exit \n\n ");
  mayus=get_character("Chose an option: ", "EQLFX");

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
  printf (" %s",mensaje );
  return;
}


int check(const char caractercheck[]){
  char caracter;
  caracter=get_character("Esta seguro?", "YN");
  if (caracter =='Y') return 1;
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
  char nombre[50];
  printf("Enrol\n");
  get_string("Name: ",nombre);
  printf("%s \n", nombre);
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
  int result;
printf("List\n");
//result=get_integer("Dame un número: ");
//printf(" %d\n", result);
result=read_integer (8,20, "Date" );
printf(" %d \n", result);
 return 0;
}


void get_string(const char *mensaje, char *palabra){

  char cadena[50];
  int longitud;
  do{ 
  printf (" %s", mensaje);
  scanf (" %s",cadena);

  longitud = strlen(cadena);
  }while(longitud>24);
  strcpy(palabra, cadena);

  return ;
}


int get_integer (const char *mensaje){
  int num;
  do{
  printf (" %s [0, 1000]: ", mensaje);
  scanf ("%d", &num);
  }while(num>=1000 || num <= 0);
  
  return num;
}


char get_character (const char *mensaje, const char *pattern){

  char caracter;
  char mayuscula;
  do{ 
  printf (" %s", mensaje);
  scanf (" %c", &caracter);
  mayuscula = toupper(caracter);
 
  }while(strchr(pattern,mayuscula) == NULL);
 
return mayuscula;  

}

int read_integer(int min, int max, const char *mensaje){
    int num_introducido;
    do{
        printf(" %s: ", mensaje);
        scanf(" %d", &num_introducido);
    }while(!(num_introducido<=max && num_introducido>=min));
    printf(" %s= ", mensaje);
    return num_introducido;
}