#ifndef DEPARTAMENTOS_H_INCLUDED
#define DEPARTAMENTOS_H_INCLUDED

#include "string.h"

typedef enum {
ARTI, CANE, CERRO, COL, DUR, FLORES, FLOR, LAVA, MALDO, MONTE, PAYSA, RION, RIVE, ROCHA, SALTO, SJ, SORIA, TACUA, TRYTR
} dptoMatri;

// Carga
void cargaDpto(dptoMatri &d);

// Selectoras
dptoMatri darDpto(dptoMatri d);

// Desplegado
void mostrarDpto(dptoMatri d);

#endif // DEPARTAMENTOS_H_INCLUDED
