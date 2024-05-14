#include <stdio.h>

int main(int argc, char *argv[])
{
  int diadelasemana = 8543;
  switch (diadelasemana)
  {
  case 1:
    printf("Hoy es lunes, que es el peor dia de la semana \n");
    break;
  case 2:
    printf("Hoy es el peor dia de la semana \n");
    break;
  case 3:
    printf("Por fin es miercoles, colegas \n");
    break;
  case 4:
    printf("Ya casi es viernes \n");
    break;
  case 5:
    printf("Ya casi estamos en el fin de semana \n");
    break;
  case 6:
    printf("Hoy es el mejor dia de la semana \n");
    break;
  case 7:
    printf("Parece mentira que manana ya sea lunes \n");
    break;
  default:
    printf("Lo que has introducido no es un dia valido de La semana \n");
    break;
    return 0;
  }
}