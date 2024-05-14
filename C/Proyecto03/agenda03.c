/*
  Programa agenda
  v1
  por Alejandro Épila
*/
#include <stdio.h>
#define PI 3.1416
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.2"
#define AUTOR "Alejandro"

int main(int argc, char *argv[])
{
  // Mensaje de bienvenida
  printf("%s v%s \n", NOMBREPROGRAMA, VERSION);
  printf("por %s \n", AUTOR);
  printf("Selecciona una opcion: \n");
  printf("\t 1 - Listado de registros \n");
  printf("\t 2 - Introducir un registro \n");
  printf("\t 3 - Eliminar un registro \n");
  printf("\t 4 - Buscar un registro \n");
  printf("\t 5 - Actualizar un registro \n");
  printf("Tu opcion: \n");
  char opcion;
  return 0;
}