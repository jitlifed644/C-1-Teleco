#include <stdio.h>
#include <stdbool.h>

int main() {
    FILE *file;
    char linea[100];
    char cadena[100];
    int entero;
    float real;
    bool formatoCorrecto;

    file = fopen("formato.txt", "r");
    if (file == NULL) {
        printf("No se puede acceder al fichero formato.txt\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), file) != NULL) {
        formatoCorrecto = false;

        if (sscanf(linea, "%s %d %f", cadena, &entero, &real) == 3) {
            formatoCorrecto = true;
            printf("Cadena: %s\nEntero: %d\nReal: %.2f\n", cadena, entero, real);
        }

        if (!formatoCorrecto) {
            printf("Mal formato: %s", linea);
        }
    }

    fclose(file);

    return 0;
}
