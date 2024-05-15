void borrarRegistros(){
    printf("Vamos a eliminar a un cliente\n");
    int idcliente;
    printf("Indica el identificador del cliente que quieras eliminar: \n");
    scanf("%i",&idcliente);
    strcpy(clientes[idcliente].nombre,"");
    strcpy(clientes[idcliente].apellidos,"");
    strcpy(clientes[idcliente].email,"");
    strcpy(clientes[idcliente].telefono,"");
}