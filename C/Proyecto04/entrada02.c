#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Introduce un nombre: \n");
  char nombre[100];
  scanf("%s", nombre);
  printf("La tecla seleccionada es: %s \n", nombre);
  return 0;
}