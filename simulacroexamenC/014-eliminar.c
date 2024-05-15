#include <stdio.h>
#include <string.h>

struct Cliente{
    char nombre[50];
    char apellidos[50];
    char telefono[50];
    char email[50];
};

int contador_clientes = 0;
struct Cliente clientes[100];

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
        struct Cliente nuevocliente;
        printf("Introduce el nombre del cliente:\n");
        scanf("%s",nuevocliente.nombre);
        printf("Introduce el apellido del cliente:\n");
        scanf("%s",nuevocliente.apellidos);
        printf("Introduce la telefono del cliente:\n");
        scanf("%s",nuevocliente.telefono);
        printf("Introduce el email del cliente:\n");
        scanf("%s",nuevocliente.email);
        clientes[contador_clientes] = nuevocliente; 
        contador_clientes++;
    }else if(opcion == 2){
        printf("Vamos a listar los clientes\n");
        for(int i = 0;i<contador_clientes;i++){
            printf("Cliente número: %i\n",i);
            printf("Nombre del cliente: %s \n",clientes[i].nombre);
            printf("Apellidos del cliente: %s \n",clientes[i].apellidos);
            printf("Teléfono del cliente: %s \n",clientes[i].telefono);
            printf("Email del cliente: %s \n",clientes[i].email);
            printf("---------------------- \n");
        }
    }else if(opcion == 3){
        int idcliente;
        printf("Vamos a actualizar a un cliente\n");
        printf("Indica el identificador del cliente que quieras actualizar: \n");
        scanf("%i",&idcliente);
        printf("Introduce el nuevo nombre del cliente:\n");
        scanf("%s",clientes[idcliente].nombre);
        printf("Introduce el nuevo apellido del cliente:\n");
        scanf("%s",clientes[idcliente].apellidos);
        printf("Introduce el nuevo telefono del cliente:\n");
        scanf("%s",clientes[idcliente].telefono);
        printf("Introduce el nuevo email del cliente:\n");
        scanf("%s",clientes[idcliente].email);
        
    }else if(opcion == 4){
        printf("Vamos a eliminar a un cliente\n");
        int idcliente;
        printf("Indica el identificador del cliente que quieras eliminar: \n");
        scanf("%i",&idcliente);
        strcpy(clientes[idcliente].nombre,"");
        strcpy(clientes[idcliente].apellidos,"");
        strcpy(clientes[idcliente].email,"");
        strcpy(clientes[idcliente].telefono,"");
    }
    menu();
}
int main(){
    
    saludo();
    menu();
    return 0;
}