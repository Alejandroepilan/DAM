#include <stdio.h>



int main(int argc, char *argv[]) {
    printf("Escoge una opción: \n");
    printf("Introduce un nombre: \n");

    char nombre[100];

    scanf("%s", nombre);

    //getchar(); // Limpiar el buffer del teclado

    printf("El nombre que has seleccionado es: %s \n", nombre);

    return 0;

}