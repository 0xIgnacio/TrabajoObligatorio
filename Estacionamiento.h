#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED

#include "TotalVehiculos.h"

typedef struct {
    totalVehiculos arre;
    int totalRecaudado;
}estacionamiento;

//Operaciones a crear:
//Dada una matrícula, determinar si existe algún vehículo ya registrado con esa matrícula.
boolean buscarMatricula(string x);

//Insertar un nuevo vehículo no registrado previamente.
void ingresarVehiculo();

/*Dada una matrícula, registrar la partida del vehículo correspondiente, eliminándolo del
estacionamiento. Los restantes vehículos deben permanecer almacenados en el mismo
orden en que están. */
void quitarSegunMatricula();

//Calcular el total recaudado hasta el momento por concepto de tickets cobrados.
int calcularTotalRecaudado();

//Devolver la cantidad de autos y la cantidad de camionetas registrados actualmente.
void mostrarCantAyC();

//Dado un departamento, contar el total de vehículos matriculados en ese departamento.
int cantVecesDepartamento();

/*Listar por pantalla matrícula, cédula del conductor y hora de entrada de todos los vehículos
registrados. Los datos de cada vehículo se listarán en una misma línea.*/
void mostrarMatCeduHora();

/*Dada una matrícula, listar detalladamente todos los datos del vehículo correspondiente. */
void mostrarSegunMatricula();


/*Dada una hora, listar por pantalla matrícula y cédula del conductor de todos los vehículos
que hayan ingresado en el correr de esa hora. */

void mostrarVehiculosSegunHora();

/*Dada una capacidad de carga, listar por pantalla matrícula, cédula del conductor y modelo
de todas las camionetas registradas que superen dicha capacidad de carga.*/

void mostrarSegunCapCarga();

#endif // ESTACIONAMIENTO_H_INCLUDED
