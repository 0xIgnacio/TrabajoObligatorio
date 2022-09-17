#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

#include "Departamentos.h"
#include "Clasificacion.h"
#include "Autos.h"
#include "Camionetas.h"
#include "Hora.h"

typedef struct {
    string matricula; // String, Arreglo o QUE TIPO DE DATO????
    dptoMatricula dpto; // Se hace typedef de esto? Ya que son 19 departamentos
    long int cedulaConductor;
    hora horaIngreso;
    clasificacion discriminante;
    union {
        autos datosAuto;
        camioneta datosCamioneta;
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