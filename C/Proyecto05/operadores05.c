#include <stdio.h>

int main(int argc, char *argv[])
{
  int numero1 = 4;
  int numero2 = 3;

  // Sobra 1 de la division
  int resultado = numero1 % numero2;
  printf("El resultado de la operacion es: %i", resultado);
  return 0;
}