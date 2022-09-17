#include <stdio.h>
#include "Camionetas.h"

void cargaCamioneta(camioneta &c) {
    printf("Ingrese el modelo de la camioneta: ");
    scan(c.modelo);
    printf("Ingrese la capacidad de carga: ");
    scanf("%d", &c.capCarga);
}

void darModelo(camioneta c, string &str) {
    strcop(str,c.modelo);
}

int darCapCarga(camioneta c) {
    return c.capCarga;
}

void mostrarCamioneta(camioneta c) {
    printf("El modelo es: ");
    print(c.modelo);
    printf("La capacidad de carga es: %d", c.capCarga);
}
