#ifndef CAMIONETAS_H_INCLUDED
#define CAMIONETAS_H_INCLUDED

#include "String.h"

typedef struct
{
    string modelo;
    int capCarga;
}camioneta;

//Carga
void cargaCamioneta(camioneta &c);

//Selectoras
void darModelo(camioneta c, string %str);
int darCapCarga(camioneta c);

//Desplegado
void mostrarCamioneta(camioneta c);

#endif // CAMIONETAS_H_INCLUDED
