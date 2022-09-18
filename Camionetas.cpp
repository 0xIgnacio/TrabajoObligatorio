#include <stdio.h>
#include "Camionetas.h"

void cargaCamioneta(Camioneta &c) {
    printf("Ingrese el modelo de la camioneta: ");
      scan(c.modelo);
    printf("Ingrese la capacidad de carga: ");
      scanf("%d", &c.capCarga);
}

void darModelo(Camioneta c, string &str) {
    strcop(str, c.modelo);
}

int darCapCarga(Camioneta c) {
  return c.capCarga;
}

void mostrarCamioneta(Camioneta c) {
    printf("El modelo es: ");
    print(c.modelo);
    printf("La capacidad de carga es: %d", c.capCarga);
}
