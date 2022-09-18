#ifndef CAMIONETAS_H_INCLUDED
#define CAMIONETAS_H_INCLUDED

#include "String.h"

typedef struct {
  string modelo;
  int capCarga;
}Camioneta;

//Carga
void cargaCamioneta(Camioneta &c);

//Selectoras
void darModelo(Camioneta c, string &str);
int darCapCarga(Camioneta c);

//Desplegado
void mostrarCamioneta(Camioneta c);

#endif // CAMIONETAS_H_INCLUDED
