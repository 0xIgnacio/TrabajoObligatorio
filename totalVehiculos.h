#ifndef TOTALVEHICULOS_H_INCLUDED
#define TOTALVEHICULOS_H_INCLUDED

#include "vehiculo.h"

const int TAM = 50;
typedef struct {
    vehiculo arre[TAM];
    int tope;
} totalVehiculos;

int darTope(totalVehiculos tot);
totalVehiculos darTotalV(totalVehiculos t);
boolean hayLugar(totalVehiculos arre);
boolean existeSegunMatricula(totalVehiculos arre, string str);
void insertarVehiculo(totalVehiculos &arr); // Precondicion: hayLugar == TRUE;
vehiculo obtenerVehiculo(totalVehiculos arr, string str); // Precondicion: existeSegunMatricula == TRUE;
int cantDpto(totalVehiculos arr, dptoMatri d);
void cantSegunTipo(totalVehiculos arr, int &cantAutos, int &cantCamionetas);
void listarVehiculos(totalVehiculos arre); // Precondicion: totalVehiculos.tope>0;
void mostrarSegunMatricula(totalVehiculos arr, string str);
void ingresadosXHora(totalVehiculos arr,int h);
void camionetaSegunCapCarga(totalVehiculos arr, int a);
void borrarVehiculo(totalVehiculos &arr, string str); // Precondicion: existeSegunMatricula == TRUE && totalVehiculos.tope>0;;


#endif // TOTALVEHICULOS_H_INCLUDED
