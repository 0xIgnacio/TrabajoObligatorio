#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED

#include "totalVehiculos.h"

typedef struct {
    totalVehiculos arre;
    int totalRecaudado;
} estacionamiento;

int cobro(vehiculo v, hora h);
void cobroSalida(estacionamiento &est);
void quitarVehiculo(estacionamiento &est, string str);
boolean existeSegunMatricula(estacionamiento est, string str);
int darTotalRec(estacionamiento est);


#endif // ESTACIONAMIENTO_H_INCLUDED
