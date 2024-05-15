void listarRegistros(){
    printf("Vamos a listar los clientes\n");
    for(int i = 0;i<contador_clientes;i++){
        printf("Cliente número: %i\n",i);
        printf("Nombre del cliente: %s \n",clientes[i].nombre);
        printf("Apellidos del cliente: %s \n",clientes[i].apellidos);
        printf("Teléfono del cliente: %s \n",clientes[i].telefono);
        printf("Email del cliente: %s \n",clientes[i].email);
        printf("---------------------- \n");
    }
}