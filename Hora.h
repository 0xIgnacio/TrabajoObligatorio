#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED

#include "Boolean.h"

typedef struct
{
    int horas;
    int minutos;
}hora;

//Carga
void cargaHora(hora &h);
//void cargaMinutos();

//Selectoras
int darHora(hora h);
int darMinutos(hora h);

//Desplegado
void mostrarHoraIngreso(hora h);

#endif // HORA_H_INCLUDED
