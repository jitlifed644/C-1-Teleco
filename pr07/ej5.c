#include <stdio.h>

int main() {
    FILE *outputFile;
    int entero;
    char cadena[100];
    float real;

    outputFile = fopen("formato.txt", "w");
    if (outputFile == NULL) {
        printf("No se pudo crear el fichero de salida\n");
        return 1;
    }

    while (1) {
        printf("Dame un entero: ");
        scanf("%d", &entero);

        if (entero < 0) {
            break;
        }

        printf("Dame una cadena: ");
        scanf("%s", cadena);

        printf("Dame un real: ");
        scanf("%f", &real);

        fprintf(outputFile, "%s %d %.2f\n", cadena, entero, real);
    }

    // Cerrar el fichero
    fclose(outputFile);

    return 0;
}
