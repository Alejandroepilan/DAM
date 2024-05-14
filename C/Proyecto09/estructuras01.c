#include <stdio.h>
#include <string.h>

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

  struct RegistroAgenda registrol;
  strcpy(registrol.nombre, "Jose Vicente");
  strcpy(registrol.apellidos, "Carratala");

  struct RegistroAgenda registro2;
  strcpy(registro2.nombre, "Julio");
  strcpy(registro2.apellidos, "Lopez");

  printf("El nombre del primer registro es: %s \n", registrol.nombre);
  printf("El apellido del primer registro es: %s \n", registrol.apellidos);

  return 0;
}