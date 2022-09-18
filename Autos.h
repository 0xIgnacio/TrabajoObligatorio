#ifndef AUTOS_H_INCLUDED
#define AUTOS_H_INCLUDED

#include "String.h"

typedef struct {
  string marca;
  int anioFabri;
}Autos;

//Carga
void cargaAuto(Autos &a);

//Selectoras
void darMarca(Autos a, string &str);
int darAnioFabri(Autos a);

//Desplegado
void mostrarAuto(Autos a);

#endif // AUTOS_H_INCLUDED
