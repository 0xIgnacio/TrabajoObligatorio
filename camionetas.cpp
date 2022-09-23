#include <stdio.h>
#include "camionetas.h"

void cargaCamioneta(camionetas &c) {
    printf("\nIngrese el modelo de la camioneta: ");
      scan(c.modelo);
    printf("\nIngrese la capacidad de carga: ");
      scanf("%d", &c.capCarga);
}

camionetas darCamioneta(camionetas c) {
  return c;
}

void darModelo(camionetas c, string &str) {
    strcop(str, c.modelo);
}

int darCapCarga(camionetas c) {
  return c.capCarga;
}

void mostrarCamioneta(camionetas c) {
    printf("\nEl modelo es: ");
    print(c.modelo);
    printf("\nLa capacidad de carga es: %d", c.capCarga);
}
