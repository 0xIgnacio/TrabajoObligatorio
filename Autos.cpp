#include <stdio.h>
#include "Autos.h"

void cargaAuto(Autos &a) {
    printf("Ingrese la marca del auto: ");
      scan(a.marca);
    printf("Ingrese el anio de fabricacion: ");
      scanf("%d", &a.anioFabri);
}

void darMarca(Autos a, string &str) {
    strcop(str, a.marca);
}

int darAnioFabri(Autos a) {
  return a.anioFabri;
}

void mostrarAuto(Autos a) {
    printf("La marca del auto es: ");
    print(a.marca);
    printf("El anio de fabricacion es: %d", a.anioFabri);
}
