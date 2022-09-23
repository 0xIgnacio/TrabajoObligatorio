#ifndef CLASIFICACION_H_INCLUDED
#define CLASIFICACION_H_INCLUDED

typedef enum {autos,camioneta} clasificacion;

// Carga
void cargarClas(clasificacion &a);

// Selectora
clasificacion darClasificacion(clasificacion c);

// Desplegado
void mostrarClas(clasificacion a);

#endif // CLASIFICACION_H_INCLUDED
