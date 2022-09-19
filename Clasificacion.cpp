#include <stdio.h>
#include "Clasificacion.h"

void cargarClas(clasificacion &a)
{
  int num;
    printf("\n1-Si es un Auto \n2-Si es una Camioneta\nIngrese: ");
      scanf("%d",&num);
    switch(num) {
      case 1:
        a=autos;
        break;
      case 2:
        a=camioneta;
        break;
      default:
          printf("Error");
        break;
    }
}

void mostrarClas(clasificacion a) {
    switch(a) {
      case autos:
          printf("El vehiculo es un auto");
        break;
      case camioneta:
          printf("El vehiculo es una camioneta");
        break;
      default:
          printf("Error");
        break;
    }
}
