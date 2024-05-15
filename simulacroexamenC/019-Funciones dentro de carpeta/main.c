#include <stdio.h>
#include <string.h>
#include "funciones/declaraciones.c"
#include "funciones/insertar.c"
#include "funciones/listar.c"
#include "funciones/actualizar.c"
#include "funciones/eliminar.c"
#include "funciones/saludo.c"
#include "funciones/funciones.c"

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
    }
    menu();
}
int main(){
    saludo();
    menu();
    return 0;
}