#include <stdio.h>

struct Cliente{
    char nombre[50];
    char apellidos[50];
    char telefono[50];
    char email[50];
};
void saludo(){
    printf("Gestion de clientes v0.1\n");
}
void menu(){
    int opcion;
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
        struct Cliente cliente1;
        printf("Introduce el nombre del cliente:\n");
        scanf("%s",cliente1.nombre);
        printf("Introduce el apellido del cliente:\n");
        scanf("%s",cliente1.apellidos);
        printf("Introduce la telefono del cliente:\n");
        scanf("%s",cliente1.telefono);
        printf("Introduce el email del cliente:\n");
        scanf("%s",cliente1.email);
        printf("%sComprobamos que los datos son correctos antes de salir\n");
        printf("%s\n",cliente1.nombre);
        printf("%s\n",cliente1.apellidos);
        printf("%s\n",cliente1.telefono);
        printf("%s\n",cliente1.email);
    }else if(opcion == 2){
        printf("Vamos a listar los clientes\n");
    }else if(opcion == 3){
        printf("Vamos a actualizar a un cliente\n");
    }else if(opcion == 4){
        printf("Vamos a eliminar a un cliente\n");
    }
    menu();
}
int main(){
    saludo();
    menu();
    return 0;
}