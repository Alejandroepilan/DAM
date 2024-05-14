#include <stdio.h>

int main(int argc, char *argv[])
{
  char *agenda[10][5];

  agenda[0][0] = "Alejandro";
  agenda[0][1] = "123456789";
  agenda[0][2] = "Calle de Alejandro";
  agenda[0][3] = "alejandro@a.com";
  agenda[0][4] = "Epila";

  agenda[1][0] = "Pedro";
  agenda[1][1] = "123456789";
  agenda[1][2] = "Calle de Pedro";
  agenda[1][3] = "Pedro@a.com";
  agenda[1][4] = "Gomez";

  agenda[2][0] = "Marc";
  agenda[2][1] = "123456789";
  agenda[2][2] = "Calle de Marc";
  agenda[2][3] = "Marc@a.com";
  agenda[2][4] = "Navarro";

  agenda[3][0] = "Alejandro";
  agenda[3][1] = "123456789";
  agenda[3][2] = "Calle de Alejandro";
  agenda[3][3] = "alejandro@a.com";
  agenda[3][4] = "Epila";

  agenda[4][0] = "Pedro";
  agenda[4][1] = "123456789";
  agenda[4][2] = "Calle de Pedro";
  agenda[4][3] = "Pedro@a.com";
  agenda[4][4] = "Gomez";

  agenda[5][0] = "Marc";
  agenda[5][1] = "123456789";
  agenda[5][2] = "Calle de Marc";
  agenda[5][3] = "Marc@a.com";
  agenda[5][4] = "Navarro";

  for (int registro = 0; registro <= 5; registro = registro + 1)
  {
    for (int campo = 0; campo <= 4; campo = campo + 1)
    {
      printf("-%s \n", agenda[registro][campo]);
    }
    printf("\n");
  }

  return 0;
}