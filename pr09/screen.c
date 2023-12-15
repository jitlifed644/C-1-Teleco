#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "screen.h"
void label(const char mensaje[])
{
    printf("%s", mensaje);
    return;
}

void border(char caracter, int num)
{
    int contador = 0;
    do
    {
        printf("%c", caracter);
        contador++;
    } while (contador < num);
    printf("\n");
    return;
}

void get_string(const char *mensaje, char *palabra)
{

    char cadena[50];
    int longitud;
    do
    {
        printf(" %s", mensaje);
        scanf("%s", cadena);

        longitud = strlen(cadena);
    } while (longitud > 24);
    strcpy(palabra, cadena);

    return;
}

int get_integer(const char *mensaje)
{
    int num;
    do
    {
        printf(" %s [0, 1000]: ", mensaje);
        scanf("%d", &num);
    } while (num > 1000 || num < 0);

    return num;
}

char get_character(const char *mensaje, const char *pattern)
{
    char cadena[256];
    char caracter;
    char mayus;
    do
    {
        printf(" %s", mensaje);
        fgets(cadena, sizeof(cadena), stdin);

        if (sscanf(cadena, "%c%*s", &caracter) != 1)
        {
            printf("Entrada no válida.\n");
        }
    } while (sscanf(cadena, "%c%*s", &caracter) != 1);

    mayus=toupper(caracter);

    return mayus;
}

int check(const char caractercheck[])
{
    char caracter;
    caracter = get_character("Esta seguro?", "YN");
    if (caracter == 'Y')
        return 1;
    return 0;
}
