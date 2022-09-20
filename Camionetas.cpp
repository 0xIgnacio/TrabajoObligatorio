#include <stdio.h>
#include "Camionetas.h"

void cargaCamioneta(Camioneta &c) {
    printf("\nIngrese el modelo de la camioneta: ");
      scan(c.modelo);
    printf("\nIngrese la capacidad de carga: ");
      scanf("%d", &c.capCarga);
}

void darModelo(Camioneta c, string &str) {
    strcop(str, c.modelo);
}

int darCapCarga(Camioneta c) {
  return c.capCarga;
}

void mostrarCamioneta(Camioneta c) {
    printf("\nEl modelo es: ");
    print(c.modelo);
    printf("\nLa capacidad de carga es: %d", c.capCarga);
}
