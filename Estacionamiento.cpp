#include <stdio.h>
#include "Estacionamiento.h"

int cobro(vehiculo ve, hora h) {
  int total, aux;
    aux=((h.horas*60)+h.minutos)-((ve.horaIngreso.horas*60)+ve.horaIngreso.minutos);
    if(aux==0)
      total=60;
    else if(aux%60==0)
      total=(aux/60)*100;
    else
      total=((aux/60)*100)+60;

  return total;
}

void cobroSalida(estacionamiento &est) {
  hora h;
  h.horas=22;
  h.minutos=0;
    if(est.arre.tope>0) {
        for(int i=0; i<est.arre.tope; i++) {
          est.totalRecaudado+=cobro(est.arre.arre[i], h);
        }
    }
}

void quitarVehiculo(estacionamiento &est,string str) {
  int i=0;
  boolean hay=FALSE, ho=FALSE;
    do {
        if(streq(est.arre.arre[i].matricula,str))
          hay=TRUE;
        else
          i++;
    } while(!hay);
    if(hay==TRUE) {
      hora horaSal;
      while(ho==FALSE){
          printf("\nIngrese hora de salida");
          cargaHora(horaSal);
          if(horaSal.horas<est.arre.arre[i].horaIngreso.horas)
            printf("La hora ingresada es menor que la hora a la que ingreso el vehiculo");
          else if(horaSal.horas==est.arre.arre[i].horaIngreso.horas && horaSal.minutos<est.arre.arre[i].horaIngreso.minutos)
            printf("La hora de salida es igual a la hora de ingreso, pero los minutos son menores");
          else ho=TRUE;
      }
        printf("Se le cobro %d", cobro(est.arre.arre[i],horaSal));
        est.totalRecaudado+=cobro(est.arre.arre[i],horaSal);
        for(i;i<est.arre.tope;i++) {
          est.arre.arre[i]=est.arre.arre[i+1];
        }
      est.arre.tope--;
    }
    else
      printf("El vehiculo no existe");
}
