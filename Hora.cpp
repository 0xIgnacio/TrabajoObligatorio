#include <stdio.h>
#include "Hora.h"

void cargaHora(hora &h) {
    printf("\n(HORA MINUTOS): ");
    scanf("%d %d", &h.horas, &h.minutos);
}

int darHora(hora h) {
    return h.horas;
}

int darMinutos(hora h) {
    return h.minutos;
}

void mostrarHoraIngreso(hora h) {
    printf("%d:%d", h.horas, h.minutos);
}
