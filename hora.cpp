#include <stdio.h>
#include "hora.h"

void cargaHora(hora &h) {
    printf("(HORA MINUTOS): ");
    scanf("%d %d", &h.horas, &h.minutos);
}

hora darStructHora(hora h) {
  return h;
}

int darHora(hora h) {
  return h.horas;
}

int darMinutos(hora h) {
  return h.minutos;
}

boolean horaValida(hora h) {
  boolean valida=FALSE;
    if(h.horas>7 && h.horas<22) {
        if(h.minutos>=0 && h.minutos<60)
          valida=TRUE;
    }

  return valida;
}

boolean horaValidaSalida(hora entrada, hora salida) {
  boolean valida=FALSE;
    if(entrada.horas<salida.horas) {
      valida=TRUE;
    }
    else if(entrada.horas==salida.horas) {
      if(entrada.minutos<salida.minutos)
        valida=TRUE;
    }

  return valida;
}

void mostrarHoraIngreso(hora h) {
    printf("%d:%d", h.horas, h.minutos);
}