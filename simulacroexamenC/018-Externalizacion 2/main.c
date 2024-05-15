#include <stdio.h>
#include <string.h>
#include "declaraciones.c"
#include "insertar.c"
#include "listar.c"
#include "actualizar.c"
#include "eliminar.c"
#include "saludo.c"
#include "funciones.c"

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