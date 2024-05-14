#include <stdio.h>

int main(int argc, char *argv[])
{
  char *agenda[10][4];

  agenda[0][0] = "Alejandro";
  agenda[0][1] = "123456789";
  agenda[0][2] = "Calle de Alejandro";
  agenda[0][3] = "alejandro@a.com";

  agenda[1][0] = "Pedro";
  agenda[1][1] = "123456789";
  agenda[1][2] = "Calle de Pedro";
  agenda[1][3] = "Pedro@a.com";

  agenda[2][0] = "Marc";
  agenda[2][1] = "123456789";
  agenda[2][2] = "Calle de Marc";
  agenda[2][3] = "Marc@a.com";

  printf("La calle es %s \n", agenda[0][2]);

  return 0;
}