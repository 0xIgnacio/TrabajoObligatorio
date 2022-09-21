#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED

#include "TotalVehiculos.h"

typedef struct {
    totalVehiculos arre;
    int totalRecaudado;
}estacionamiento;

int cobro(vehiculo ve, hora h);
void cobroSalida(estacionamiento &est);
void quitarVehiculo(estacionamiento &est, string str);

#endif // ESTACIONAMIENTO_H_INCLUDED
