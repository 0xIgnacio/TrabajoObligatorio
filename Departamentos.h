#ifndef DEPARTAMENTOS_H_INCLUDED
#define DEPARTAMENTOS_H_INCLUDED

#include "String.h"

typedef enum {
ARTI, CANE, CERRO, COL,
DUR, FLORES, FLOR, LAVA,
MALDO, MONTE, PAYSA, RION, RIVE,
ROCHA, SALTO, SJ, SORIA, TACUA, TRYTR
}dptoMatri;

void cargaDpto(dptoMatri d);
void mostrarDpto(dptoMatri d);


#endif // DEPARTAMENTOS_H_INCLUDED
