#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones/declaraciones.c"
#include "funciones/insertar.c"
#include "funciones/listar.c"
#include "funciones/actualizar.c"
#include "funciones/eliminar.c"
#include "funciones/saludo.c"
#include "funciones/funciones.c"
#include "funciones/escribirArchivo.c"
#include "funciones/leerArchivo.c"

void menu(){
    int opcion;
    mensajesMenu();
    scanf("%d",&opcion);
    printf("La opción seleccionada es: %d\n",opcion);
    if(opcion == 1){
        insertarRegistros();
    }else if(opcion == 2){
        listarRegistros();
    }else if(opcion == 3){
        actualizarRegistros();
    }else if(opcion == 4){
        borrarRegistros();
    }else if(opcion == 5){
        escribirArchivo();
    }
    menu();
}
int main(){
    saludo();
    leerArchivo();
    menu();
    return 0;
}