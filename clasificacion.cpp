#include <stdio.h>
#include "clasificacion.h"

void cargarClas(clasificacion &a)
{
  int num;
    printf("\n1-Si es un Auto \n2-Si es una Camioneta\nIngrese: ");
      scanf("%d",&num);
    while(num<=0 || num>=3) {
        printf("Numero invalido, ingrese denuevo: ");
          scanf("%d",&num);
    }
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

clasificacion darClasificacion(clasificacion c) {
  return c;
}

void mostrarClas(clasificacion a) {
    switch(a) {
      case autos:
          printf("\nEl vehiculo es un auto");
        break;
      case camioneta:
          printf("\nEl vehiculo es una camioneta");
        break;
      default:
          printf("Error");
        break;
    }
}