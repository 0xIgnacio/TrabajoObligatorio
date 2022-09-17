#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED

#include "TotalVehiculos.h"

typedef struct {
    totalVehiculos arre;
    int totalRecaudado;
}estacionamiento;

//Operaciones a crear:
//Dada una matr�cula, determinar si existe alg�n veh�culo ya registrado con esa matr�cula.
boolean buscarMatricula(string x);

//Insertar un nuevo veh�culo no registrado previamente.
void ingresarVehiculo();

/*Dada una matr�cula, registrar la partida del veh�culo correspondiente, elimin�ndolo del
estacionamiento. Los restantes veh�culos deben permanecer almacenados en el mismo
orden en que est�n. */
void quitarSegunMatricula();

//Calcular el total recaudado hasta el momento por concepto de tickets cobrados.
int calcularTotalRecaudado();

//Devolver la cantidad de autos y la cantidad de camionetas registrados actualmente.
void mostrarCantAyC();

//Dado un departamento, contar el total de veh�culos matriculados en ese departamento.
int cantVecesDepartamento();

/*Listar por pantalla matr�cula, c�dula del conductor y hora de entrada de todos los veh�culos
registrados. Los datos de cada veh�culo se listar�n en una misma l�nea.*/
void mostrarMatCeduHora();

/*Dada una matr�cula, listar detalladamente todos los datos del veh�culo correspondiente. */
void mostrarSegunMatricula();


/*Dada una hora, listar por pantalla matr�cula y c�dula del conductor de todos los veh�culos
que hayan ingresado en el correr de esa hora. */

void mostrarVehiculosSegunHora();

/*Dada una capacidad de carga, listar por pantalla matr�cula, c�dula del conductor y modelo
de todas las camionetas registradas que superen dicha capacidad de carga.*/

void mostrarSegunCapCarga();

#endif // ESTACIONAMIENTO_H_INCLUDED
