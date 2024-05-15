#include <stdio.h>

int main(){
    int opcion;
    printf("Gestion de clientes v0.1\n");
    printf("Selecciona una opcion:\n");
    printf("1.-Insertar un cliente\n");
    printf("2.-Listado de clientes\n");
    printf("3.-Actualizar un cliente\n");
    printf("4.-Eliminar un cliente\n");
    printf("Selecciona una opcion:\n");
    scanf("%d",&opcion);
    printf("La opción seleccionada es: %d\n",opcion);
    if(opcion == 1){
        printf("Vamos a insertar un nuevo cliente\n");
    }else if(opcion == 2){
        printf("Vamos a listar los clientes\n");
    }else if(opcion == 3){
        printf("Vamos a actualizar a un cliente\n");
    }else if(opcion == 4){
        printf("Vamos a eliminar a un cliente\n");
    }
    return 0;
}