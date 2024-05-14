#include <stdio.h>

int main(int argc, char *argv[])
{
  int edad = 52;
  if (edad < 20)
  {
    if (edad < 20)
    {
      printf("Eres un nino \n");
    }
    else
    {
      printf("Eres un adolescente \n");
    }
  }
  else
  {
    if (edad < 30)
    {
      printf("Eres un joven \n");
    }
    else
    {
      printf("Ya no eres tan joven \n");
    }
  }
  return 0;
}