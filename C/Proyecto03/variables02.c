/*
  Variables
  por Alejandro Épila
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
  int edad = 42;
  printf("La edad que tienes es de %i anos \n", edad);
  printf("El doble de la edad es: %i anos \n", edad * 2);

  float altura = 1.78;
  printf("Lo que mides es %f metros \n", altura);
  printf("El doble de lo que mides es %f metros \n", altura * 2);

  char nombre[] = "Alejandro";
  printf("Mi nombre es %s \n", nombre);
  return 0;
}