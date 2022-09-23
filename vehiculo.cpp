#include <stdio.h>
#include "vehiculo.h"

void cargaVehiculo(vehiculo &v)
{
    printf("\nIngrese la matricula del Vehiculo: ");
    scan(v.matricula);
    cargaDpto(v.dpto);
    //Prec: funciona solo para long int
    printf("\nIngrese la Cedula del Conductor: ");
    scanf("%ld",&v.cedulaConductor);
    printf("\nIngrese hora de Ingreso: ");
    cargaHora(v.horaIngreso);
    cargarClas(v.discriminante);
    if(v.discriminante==autos){
        cargaAuto(v.datos.datosAuto);
    }else cargaCamioneta(v.datos.datosCamioneta);
}

vehiculo darVehiculo(vehiculo v) {
  return v;
}

void darMatricula(vehiculo v, string &str)
{
    strcop(str,v.matricula);
}

dptoMatri darDptoMatricula(vehiculo v)
{
    return v.dpto;
}

long int darCedulaConductor(vehiculo v)
{
    return v.cedulaConductor;
}

hora darHoraIngreso(vehiculo v) {
    return v.horaIngreso;
}

clasificacion darTipoVehiculo(vehiculo v)
{
    return v.discriminante;
}

Autos darDatosAuto (vehiculo v) {
    return v.datos.datosAuto;
}

camionetas darDatosCamioneta (vehiculo v) {
    return v.datos.datosCamioneta;
}


void mostrarVehiculo(vehiculo v)
{
    printf("\nLa matricula es: ");
    print(v.matricula);
    mostrarDpto(v.dpto);
    printf("\nLa cedula del conductor es: %ld", v.cedulaConductor);
    printf("\nEl vehiculo ingreso a las: ");
    mostrarHoraIngreso(v.horaIngreso);
    mostrarClas(v.discriminante);
    if(v.discriminante==autos){
        mostrarAuto(v.datos.datosAuto);
    }else mostrarCamioneta(v.datos.datosCamioneta);
}