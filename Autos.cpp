#include <stdio.h>
#include "Autos.h"

void cargaAuto(Autos &a) {
    printf("\nIngrese la marca del auto: ");
      scan(a.marca);
    printf("\nIngrese el anio de fabricacion: ");
      scanf("%d", &a.anioFabri);
}

void darMarca(Autos a, string &str) {
    strcop(str, a.marca);
}

int darAnioFabri(Autos a) {
  return a.anioFabri;
}

void mostrarAuto(Autos a) {
    printf("\nLa marca del auto es: ");
    print(a.marca);
    printf("\nEl anio de fabricacion es: %d", a.anioFabri);
}
