#include <stdio.h>
#include "estacionamiento.h"

void aumentarRec(estacionamiento &est, int total) {
  est.totalRecaudado+=total;
}

int cobro(vehiculo v, hora h) {
  hora ho=darStructHora(v.horaIngreso);
  int total, aux;
    aux=((h.horas*60)+h.minutos)-((ho.horas*60)+ho.minutos);
    if(aux==0)
      total=60;
    else if(aux%60==0)
      total=(aux/60)*100;
    else
      total=((aux/60)*100)+60;

  return total;
}

void cobroSalida(estacionamiento &est) {
  totalVehiculos t=darTotalV(est.arre);
  vehiculo v;
  hora h;
  h.horas=22;
  h.minutos=0;
    if(t.tope>0) {
        for(int i=0; i<t.tope; i++) {
          v=darVehiculo(t.arre[i]);
          est.totalRecaudado+=cobro(v, h);
        }
    }
}

vehiculo obtenerVehiculo(estacionamiento est, string str) {
    return obtenerVehiculo(est.arre,  str);
}

void quitarVehiculo(estacionamiento &est,string str) {
    borrarVehiculo(est.arre, str);
}

boolean existeSegunMatricula(estacionamiento est, string str) {
  return existeSegunMatricula(est.arre, str);
}

int darTotalRec(estacionamiento est) {
  return est.totalRecaudado;
}
