#include <stdio.h>
#include "Estacionamiento.h"

int cobro(vehiculo ve, hora h) {
  int total, aux;
    aux=((h.horas*60)+h.minutos)-((ve.horaIngreso.horas)+ve.horaIngreso.minutos);
    if((aux/60)%60==0)
      total=(aux/60)*100;
    else
      total=((aux/60)*100)+60;

/*
    if(h.horas!=ve.horaIngreso.horas) {
      if(h.minutos>=ve.horaIngreso.minutos) {
        total=(h.horas-ve.horaIngreso.horas)*100;
        if((h.minutos-ve.horaIngreso.minutos)!=0)
          total+=60;
      }
      else
        total=((h.horas-ve.horaIngreso.horas)-1)*100;
        total+=60;
    }
    else
      total=60
*/

  return total;
}

void quitarVehiculo(estacionamiento &est,string str) {
  int i=0;
  boolean hay=FALSE;
    do {
        if(streq(est.arre.arre[i].matricula,str))
          hay=TRUE;
        i++;
    } while(!hay);
    if(hay==TRUE) {
      hora horaSal;
        printf("Ingrese hora de salida");
        cargaHora(horaSal);
        est.totalRecaudado+=cobro(est.arre.arre[i],horaSal);
        for(i;i<est.arre.tope;i++) {
          est.arre.arre[i]=est.arre.arre[i+1];
        }
      est.arre.tope--;

    }
    else
      printf("El vehiculo no existe");
}
