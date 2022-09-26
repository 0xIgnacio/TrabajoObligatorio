#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED

#include "totalVehiculos.h"

typedef struct {
    totalVehiculos arre;
    int totalRecaudado;
} estacionamiento;

void aumentarRec(estacionamiento &est, int total);
int cobro(vehiculo v, hora h);
void cobroSalida(estacionamiento &est);
vehiculo obtenerVehiculo(estacionamiento est, string str); // Precondicion: existeSegunMatricula == TRUE;
void quitarVehiculo(estacionamiento &est, string str); // Precondicion: existeSegunMatricula == TRUE && totalVehiculos.tope>0;;
boolean existeSegunMatricula(estacionamiento est, string str);
int darTotalRec(estacionamiento est);


#endif // ESTACIONAMIENTO_H_INCLUDED
