#include <stdio.h>

int main(int argc, char *argv[])
{
  int numero1 = 4;
  int numero2 = 3;
  int numero3 = 2;
  int numero4 = 6;

  int comparacion = numero1 < numero2 && numero3 < numero4;
  printf("El resultado de la operacion es: %i", comparacion);
  return 0;
}