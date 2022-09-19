#include <stdio.h>
#include "TotalVehiculos.h"

boolean hayLugar(totalVehiculos arre) {
  boolean lugar = FALSE;
    if(arre.tope<TAM){
            lugar=TRUE;
        }

  return lugar;
}

boolean existeSegunMatricula(totalVehiculos arr,string str) {
  int i=0;
  boolean existe = FALSE;
    do {
        if(streq(arr.arre[i].matricula,str))
          existe=TRUE;
        else
          i++;
    }while(existe==FALSE && i<arr.tope);

  return existe;
}

void insertarVehiculo(totalVehiculos &arr) {
    if(hayLugar(arr)==TRUE) {
        cargaVehiculo(arr.arre[arr.tope]);
        arr.tope++;
    }
    else
      printf("No hay lugar");
}

int cantDpto(totalVehiculos arr, dptoMatri d) {
  int cantVeces=0;
    for(int i=0;i<arr.tope;i++) {
      if(arr.arre[i].dpto==d) {
        cantVeces++;
      }
    }

  return cantVeces;
}

void cantSegunTipo(totalVehiculos arr) {
  int cantAutos=0, cantCamionetas=0;
    for(int i=0;i<arr.tope;i++) {
        if(arr.arre[i].discriminante==autos) {
          cantAutos++;
        }
        else
          cantCamionetas++;
    }
    printf("Hay %d autos y %d camionetas",cantAutos,cantCamionetas);
}

void listarVehiculos(totalVehiculos arr) {
    for(int i=0;i<arr.tope;i++) {
        printf("Matricula: ");
        print(arr.arre[i].matricula);
        printf(" Cedula: %ld",arr.arre[i].cedulaConductor);
        printf(" Hora ingreso: ");
        mostrarHoraIngreso(arr.arre[i].horaIngreso);
        printf("\n");
    }
}

void mostrarSegunMatricula(totalVehiculos arr, string str) {
  int i=0;
  boolean encontre = FALSE;
    do {
        if(streq(arr.arre[i].matricula,str)==TRUE) {
            mostrarVehiculo(arr.arre[i]);
            encontre=TRUE;
        }
        else
          i++;
    }while(encontre==FALSE && i<arr.tope);

    if(encontre==FALSE) {
        printf("Esa matricula no se encuentra en el Estacionamiento.");
    }
}

void ingresadosXHora(totalVehiculos arr,int h) {
  int cantVehiculos=0;
    for(int i=0;i<arr.tope;i++) {
        if(arr.arre[i].horaIngreso.horas==h) {
            printf("El siguiente vehiculo ingreso en el correr de esa hora: ");
            print(arr.arre[i].matricula);
            printf("Y lo conducia: %ld",arr.arre[i].cedulaConductor);
        }
        else
          cantVehiculos++;
    }
    if(cantVehiculos==arr.tope) {
        printf("Ningun vehiculo ingreso en el correr de esa hora.");
    }
}

void camionetaSegunCapCarga(totalVehiculos arr, int a) {
    for(int i=0;i<arr.tope;i++) {
        if(arr.arre[i].datos.datosCamioneta.capCarga>a) {
            printf("La camioneta modelo ");
            print(arr.arre[i].datos.datosCamioneta.modelo);
            printf(" conducida por %ld supera esa capacidad de carga", arr.arre[i].cedulaConductor);
        }
    }
}
