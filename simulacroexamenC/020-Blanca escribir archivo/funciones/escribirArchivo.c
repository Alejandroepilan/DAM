void escribirArchivo(){
    FILE* fichero;
    fichero = fopen("datos.dat","wb");
    fwrite(&clientes, sizeof(struct Cliente),contador_clientes,fichero);
    fclose(fichero);
}