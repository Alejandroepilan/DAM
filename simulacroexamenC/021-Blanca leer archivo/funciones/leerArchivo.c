void leerArchivo()
{
    FILE *fichero;
    fichero = fopen("datos.dat", "rb");
    size_t num_leidos = fread(clientes, sizeof(struct Cliente), 25, fichero);
    contador_clientes = num_leidos;
    fclose(fichero);
}