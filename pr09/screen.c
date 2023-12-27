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
    char respuesta[256], resto[256];
    int dato_correcto;
    do
    {
        printf(" %s [1-24]: ", mensaje);
        fgets(respuesta, sizeof(respuesta), stdin);
        if ((sscanf(respuesta, "%s%s", cadena, resto)) == 1) 
        //Para usar el sscanf se pone primero se pone la cadena en la que se quiere escribir,
        //despues los identificadores, y por ultimo las variables de las que se sacan los datos.
        {
            if ((strlen(cadena) > 0) && (strlen(cadena) < 24))
            {
                dato_correcto = 1;
            }
        }
    } while (!dato_correcto);
    strcpy(palabra, cadena);
    return;
}

int get_integer(const char *mensaje)
{
    int num;
    char respuesta[256], resto[256];
    int dato_correcto;
    dato_correcto = 0;
    do
    {
        printf(" %s [0, 1000]: ", mensaje);
        fgets(respuesta, sizeof(respuesta), stdin);
        if ((sscanf(respuesta, "%d%s", &num, resto)) == 1)
            if ((num >= 0) && (num <= 1000))
            {
                dato_correcto = 1;
            }
    } while (!dato_correcto);

    return num;
}

char get_character(const char *mensaje, const char *pattern)
{
    char c, mayus, respuesta[256], resto[256];
    int dato_correcto;
    dato_correcto = 0;
    do
    {
        printf("\n%s[%s] ", mensaje, pattern);
        fgets(respuesta, sizeof(respuesta), stdin);
        if ((sscanf(respuesta, "%c%s", &c, resto)) != 1)
        {
            dato_correcto = 0;
        }
        else
        {
            if (strchr(pattern, toupper(c)) != NULL)
            {
                dato_correcto = 1;
            }
        }
        mayus = toupper(c);
    } while (!dato_correcto);

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
