#include <stdio.h>

int main() {
    FILE *file;
    char linea[100];
    char cadena[100];
    int entero;
    float real;

    file = fopen("formato.txt", "r");
    if (file == NULL) {
        printf("No se puede acceder al fichero formato.txt\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), file) != NULL) {
        if (sscanf(linea, "%s %d %f", cadena, &entero, &real) == 3) {

            printf("Cadena: %s\nEntero: %d\nReal: %.2f\n", cadena, entero, real);
        } else {
            printf("Error al procesar la línea\n");
        }
    }

    fclose(file);

    return 0;
}
