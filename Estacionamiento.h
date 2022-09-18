#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED

#include "TotalVehiculos.h"

typedef struct {
    totalVehiculos arre;
    int totalRecaudado;
}estacionamiento;

void quitarVehiculo(estacionamiento &est, string str);
int cobro(vehiculo ve, hora h);

#endif // ESTACIONAMIENTO_H_INCLUDED
