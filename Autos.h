#ifndef AUTOS_H_INCLUDED
#define AUTOS_H_INCLUDED

#include "String.h"

typedef struct
{
    string marca;
    int anioFabri;
}autos;

//Carga
void cargaAuto(autos &a);

//Selectoras
void darMarca(autos a, string &str);
int darAnioFabri(autos a);

//Desplegado
void mostrarAuto(autos a);

#endif // AUTOS_H_INCLUDED
