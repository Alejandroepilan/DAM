#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Selecciona una tecla: \n");
  char seleccion = getchar();
  printf("La tecla seleccionada es: %c \n", seleccion);
  return 0;
}