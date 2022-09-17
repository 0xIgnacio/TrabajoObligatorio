#ifndef TOTALVEHICULOS_H_INCLUDED
#define TOTALVEHICULOS_H_INCLUDED

#include "Vehiculo.h"

const int TAM = 50;
typedef struct {
    Vehiculo arre[TAM];
    int tope;
}totalVehiculos;

void insertarVehiculo(totalVehiculos &arr);
void quitarVehiculo();

#endif // TOTALVEHICULOS_H_INCLUDED
