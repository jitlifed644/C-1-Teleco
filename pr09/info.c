#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "info.h"
#include "screen.h" 

int p_enrol()
{
    char nombre[50];
    printf("Enrol\n");
    get_string("Name: ", nombre);
    printf("%s \n", nombre);
    return 0;
}

int p_quit()
{
    printf("Quit\n");
    return 0;
}

int p_filter()
{
    printf("Filter\n");
    return 0;
}

int p_list(struct Gamer *tabla, int numero)
{
    int indice;
    printf("List\n");
    printf("Gamers table:\n");
    

    for(indice=0; indice<numero; indice++){
        printf("%s: %d\n",tabla[indice].name, tabla[indice].code);
    }
    return 0;
}

int p_init(struct Gamer *tabla, int *numero)
{
    int code;
    *numero = 0;
    code = get_integer("Code");
    while (code > 0)
    {
        tabla[*numero].code = code;
        get_string("Name: ", tabla[*numero].name);
        (*numero)++;
        code = get_integer("Code");
    }
    return 0;
}
