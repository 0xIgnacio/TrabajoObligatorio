#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED

#include "boolean.h"

typedef struct {
  int horas;
  int minutos;
} hora;

// Carga
void cargaHora(hora &h);

// Selectoras
hora darStructHora(hora h);
int darHora(hora h);
int darMinutos(hora h);
boolean horaValida(hora h);
boolean horaValidaSalida(hora h, hora ho);

// Desplegado
void mostrarHoraIngreso(hora h);

#endif // HORA_H_INCLUDED
