/*
  Programa agenda
  v1
  por Alejandro Épila
*/
#include <stdio.h>
#include <string.h>
#define PI 3.1416
#define NOMBREPROGRAMA "Programa agenda"
#define VERSION "1.2"
#define AUTOR "Alejandro"

int main(int argc, char *argv[])
{

  struct RegistroAgenda
  {
    char nombre[50];
    char apellidos[50];
    char correo[50];
    char telefono[50];
    char direccion[50];
  };

  struct RegistroAgenda agenda[100];
  strcpy(agenda[0].nombre, "Jose Vicente");
  strcpy(agenda[0].apellidos, "Carratala");
  strcpy(agenda[1].nombre, "Juan");
  strcpy(agenda[1].apellidos, "Lopez");
  strcpy(agenda[2].nombre, "Jaime");
  strcpy(agenda[2].apellidos, "Martinez");

  printf("%s v%s \n", NOMBREPROGRAMA, VERSION);
  printf("por %s \n", AUTOR);
  printf("Selecciona una opcion: \n");
  printf("\t 1 - Listado de registros \n");
  printf("\t 2 - Introducir un registro \n");
  printf("\t 3 - Eliminar un registro \n");
  printf("\t 4 - Buscar un registro \n");
  printf("\t 5 - Actualizar un registro \n");
  printf("Tu opcion: \n");
  char opcion = getchar();
  printf("La opcion seleccionada es: %c \n", opcion);

  switch (opcion)
  {
  case '1':
    printf("A continuacion te ofrezco un listado de registros \n");
    for (int i = 0; i < 10; i = i + 1)
    {
      if (strcmp(agenda[i].nombre, ""))
      {
        printf("El nombre es: %s\n", agenda[i].nombre);
        printf("El apellido es: %s\n", agenda[i].apellidos);
      }
    }
    break;
  case '2':
    printf("Ahora vamos a introducir un registro \n");
    break;
  case '3':
    printf("Vamos a eliminar un registro \n");
    break;
  case '4':
    printf("Buscamos entre los registros \n");
    break;
  case '5':
    printf("Actualizaremos los datos del programa \n");
    break;
  default:
    printf("La opcion que has seleccionado no es valida \n");
  }
  printf("Finalizando la ejecucion del programa... \n");
  printf("\n");
  return 0;
}