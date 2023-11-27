#include <stdio.h>

int main() {
    int ID;
    char nombre[50];
    char restoLinea[100];

    printf("Escribe la línea con el formato \"ID Nombre\": ");
    if (scanf("%d %49s", &ID, nombre) != 2) {
        printf("Error: La entrada no respeta el formato especificado.\n");
        return 1;
    }

    fgets(restoLinea, sizeof(restoLinea), stdin); // Capturar el resto de la línea

    printf("ID: %d\n", ID);
    printf("Nombre: %s\n", nombre);

    return 0;
}
