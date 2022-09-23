#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

#include "hora.h"
#include "autos.h"
#include "camionetas.h"
#include "departamentos.h"
#include "clasificacion.h"

typedef struct {
  string matricula;
  dptoMatri dpto;
  long int cedulaConductor;
  hora horaIngreso;
  clasificacion discriminante;
  union {
    Autos datosAuto;
    camionetas datosCamioneta;
  }datos;
} vehiculo;

// Carga
void cargaVehiculo(vehiculo &v);

// Selectoras
vehiculo darVehiculo(vehiculo v);
void darMatricula(vehiculo v, string &str);
dptoMatri darDptoMatricula(vehiculo v);
long int darCedulaConductor(vehiculo v);
hora darHoraIngreso(vehiculo v);
clasificacion darTipoVehiculo(vehiculo v);
Autos darDatosAuto (vehiculo v);
camionetas darDatosCamioneta (vehiculo v);

// Desplegado
void mostrarVehiculo(vehiculo v);

#endif // VEHICULO_H_INCLUDED
