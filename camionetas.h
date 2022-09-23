#ifndef CAMIONETAS_H_INCLUDED
#define CAMIONETAS_H_INCLUDED

#include "string.h"

typedef struct {
  string modelo;
  int capCarga;
} camionetas;

// Carga
void cargaCamioneta(camionetas &c);

// Selectoras
camionetas darCamioneta(camionetas c);
void darModelo(camionetas c, string &str);
int darCapCarga(camionetas c);

// Desplegado
void mostrarCamioneta(camionetas c);

#endif // CAMIONETAS_H_INCLUDED

