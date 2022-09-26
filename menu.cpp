#include <stdio.h>
#include "menu.h"

// ============ Axel de Leon - Ignacio Perciante ===========
// ==================== Estacionamiento ====================
// ========== Apertura: 8:00 am - Cierre: 22:00 pm =========

void desplegarMenu() {
    printf("============ Axel de Leon - Ignacio Perciante ===========\n==================== Estacionamiento ====================\n========== Apertura: 8:00 am - Cierre: 22:00 pm =========\n");
    printf("\n1. Registrar ingreso de vehiculo\n2. Registrar partida de vehiculo\n3. Menu de consultas y listados\n4. Salir del programa\n\nIngrese funcion: ");
}

void desplegarMenuOp3() {
    printf("============ Axel de Leon - Ignacio Perciante ===========\n=============== Menu consultas y listados ===============\n========== Apertura: 8:00 am - Cierre: 22:00 pm =========\n");
    printf("\n1. Total recaudado hasta el momento por concepto de tickets\n2. Cantidad de autos y cantidad de camionetas registrados actualmente\n3. Cantidad de vehiculos matriculados en un departamento determinado\n4. Listado de vehiculos registrados actualmente\n5. Listado detallado de un vehiculo\n6. Listado de vehiculos que ingresaron dentro de una hora determinada\n7. Listado de camionetas que superan una capacidad de carga determinada\n8. Volver al menu principal\n\nIngrese funcion: ");
}
