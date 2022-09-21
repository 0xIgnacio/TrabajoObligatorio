#include <stdio.h>
#include "Hora.h"

void cargaHora(hora &h) {
  boolean val=FALSE;
    do {
      printf("(HORA MINUTOS): ");
        scanf("%d %d", &h.horas, &h.minutos);
        if(h.horas>=8 && h.horas<22) {
          if(h.minutos<60 && h.minutos>=0)
            val=TRUE;
          else
            printf("Hora invalida, ingrese denuevo ");
        }
        else
          printf("Hora invalida, ingrese denuevo ");
    } while(val==FALSE);
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
