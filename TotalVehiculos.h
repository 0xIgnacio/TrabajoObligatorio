#ifndef TOTALVEHICULOS_H_INCLUDED
#define TOTALVEHICULOS_H_INCLUDED

#include "Vehiculo.h"

const int TAM = 50;
typedef struct {
    vehiculo arre[TAM];
    int tope;
}totalVehiculos;

boolean hayLugar(totalVehiculos arre);
boolean existeSegunMatricula(totalVehiculos arre, string str);
void insertarVehiculo(totalVehiculos &arr);
int cantDpto(totalVehiculos arr, dptoMatri d);
void cantSegunTipo(totalVehiculos arr, clasificacion c);
void listarVehiculos(totalVehiculos arre);
void mostrarSegunMatricula(totalVehiculos arr, string str);
void ingresadosXHora(totalVehiculos arr,int h);
void camionetaSegunCapCarga(totalVehiculos arr, int a);

#endif // TOTALVEHICULOS_H_INCLUDED
