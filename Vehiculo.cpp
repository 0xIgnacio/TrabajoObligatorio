#include <stdio.h>
#include "Vehiculo.h"

//----------------------CARGA----------------------
void cargaVehiculo(vehiculo &v)
{
    printf("\nIngrese la matricula del Vehiculo: ");
    scan(v.matricula);
    cargaDpto(v.dpto);
    printf("\nIngrese la Cedula del Conductor: ");
    scanf("%ld",&v.cedulaConductor);
    printf("\nIngrese hora de Ingreso: ");
    cargaHora(v.horaIngreso);
    cargarClas(v.discriminante);
    if(v.discriminante==autos){
        cargaAuto(v.datos.datosAuto);
    }else cargaCamioneta(v.datos.datosCamioneta);
}


//----------------------SELECTORAS----------------------
void darMatricula(vehiculo v, string &str)
{
    strcop(str,v.matricula);
}

void darDptoMatricula(vehiculo v)
{
    mostrarDpto(v.dpto);
}

int darCedulaConductor(vehiculo v)
{
    return v.cedulaConductor;
}

clasificacion darTipoVehiculo(vehiculo v)
{
    return v.discriminante;
}

//----------------------DESPLEGADO----------------------

void mostrarVehiculo(vehiculo v)
{
    printf("La matricula es:");
    print(v.matricula);
    mostrarDpto(v.dpto);
    printf("La cedula del conductor es: %ld", v.cedulaConductor);
    printf("El vehiculo ingreso a las: ");
    mostrarHoraIngreso(v.horaIngreso);
    mostrarClas(v.discriminante);
    if(v.discriminante==autos){
        mostrarAuto(v.datos.datosAuto);
    }else mostrarCamioneta(v.datos.datosCamioneta);
}
