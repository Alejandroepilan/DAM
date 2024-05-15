void insertarRegistros(){
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
}