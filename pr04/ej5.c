#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadenas[5][25];
    int posicion, posCadena;

    // Pedir al usuario que introduzca 5 cadenas de hasta 24 caracteres
    for (int i = 0; i < 5; i++) {
        printf("Escribe una cadena (1-24 char): ");
        scanf("%24s", cadenas[i]);
    }

    // Pedir al usuario un número entre 1 y 24
    printf("Posicion del caracter a convertir [1-24]: ");
    scanf("%d", &posicion);

    // Verificar que el número esté dentro del rango válido
    if (posicion < 1 || posicion > 24) {
        printf("Número fuera de rango.\n");
        return 1;
    }

    // Convertir a mayúscula el carácter en la posición dada en cada cadena
    for (int i = 0; i < 5; i++) {
        if (cadenas[i][posicion - 1] != '\0') {
            cadenas[i][posicion - 1] = toupper(cadenas[i][posicion - 1]);
        }
    }

    // Pedir al usuario un número entre 1 y 5
    printf("Posicion de la cadena a mostrar [1-5]: ");
    scanf("%d", &posCadena);

    // Verificar que el número esté dentro del rango válido
    if (posCadena < 1 || posCadena > 5) {
        printf("Número fuera de rango.\n");
        return 1;
    }

    // Mostrar la cadena en la posición dada
    printf("La cadena en la posicion %d es %s\n", posCadena, cadenas[posCadena - 1]);

    return 0;
}
