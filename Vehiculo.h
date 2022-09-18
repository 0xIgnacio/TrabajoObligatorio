#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

#include "Departamentos.h"
#include "Clasificacion.h"
#include "Autos.h"
#include "Camionetas.h"
#include "Hora.h"

typedef struct {
  string matricula;
  dptoMatri dpto;
  long int cedulaConductor;
  hora horaIngreso;
  clasificacion discriminante;
  union {
    Autos datosAuto;
    Camioneta datosCamioneta;
  }datos;
}vehiculo;

//Carga
void cargaVehiculo(vehiculo &v);

//Selectoras
void darMatricula(vehiculo v, string &str);
void darDptoMatricula(vehiculo v);
int darCedulaConductor(vehiculo v);
clasificacion darTipoVehiculo(vehiculo v);

//Desplegado
void mostrarVehiculo(vehiculo v);

#endif // VEHICULO_H_INCLUDED
