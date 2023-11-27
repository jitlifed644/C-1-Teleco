#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    printf("Número de argumentos: %d\n", argc);
    for(i=0; i<argc;i++){
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    return 0;
}