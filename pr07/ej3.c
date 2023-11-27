#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fichero_entrada, *fichero_salida,;
    char char_lectura;

    // Verificar si se proporcionó un nombre de fichero
    if (argc != 2) {
        printf("Uso: %s nombre_fichero\n", argv[0]);
        return -1;
    }

    // Intentar abrir el fichero para lectura
    fichero_entrada = fopen(argv[1], "r");
    if (fichero_entrada == NULL) {
        printf("Fichero inexistente\n");
        return -1;
    }

    // Abrir el fichero de salida para escritura
    fichero_salida = fopen("caracter.txt", "w");
    while ((char_lectura = fgetc(fichero_entrada)) != EOF) {
        fputc(char_lectura, fichero_salida);
    }

    // Cerrar los ficheros
    fclose(fichero_entrada);
    fclose(fichero_salida);

    printf("Fichero procesado correctamente\n");

    return 0;
}
