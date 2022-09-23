#ifndef AUTOS_H_INCLUDED
#define AUTOS_H_INCLUDED

#include "string.h"

typedef struct {
  int anioFabri;
  string marca;
} Autos;

// Carga
void cargaAuto(Autos &a);

// Selectoras
Autos darAuto(Autos a);
void darMarca(Autos a, string &str);
int darAnioFabri(Autos a);

// Desplegado
void mostrarAuto(Autos a);


#endif // AUTOS_H_INCLUDED
