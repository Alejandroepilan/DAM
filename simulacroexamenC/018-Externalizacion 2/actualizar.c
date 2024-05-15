void actualizarRegistros(){
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
}