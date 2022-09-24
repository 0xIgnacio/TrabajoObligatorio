#include <stdio.h>
#include "totalVehiculos.h"

int darTope(totalVehiculos tot) {
  return tot.tope;
}

totalVehiculos darTotalV(totalVehiculos t) {
  return t;
}

boolean hayLugar(totalVehiculos arre) {
  boolean lugar=FALSE;
    if(arre.tope<TAM){
      lugar=TRUE;
    }

  return lugar;
}

boolean existeSegunMatricula(totalVehiculos arr,string str) {
  vehiculo v;
  int i=0;
  boolean existe=FALSE;
    do {
      v=darVehiculo(arr.arre[i]);
        if(streq(v.matricula, str))
          existe=TRUE;
        else
          i++;
    }while(existe==FALSE && i<arr.tope);

  return existe;
}

void insertarVehiculo(totalVehiculos &arr) {
    cargaVehiculo(arr.arre[arr.tope]);
  arr.tope++;
}

vehiculo obtenerVehiculo(totalVehiculos arr, string str) {
  int i=0;
  vehiculo v;
  string matricula;
  boolean hay=FALSE;
    do {
      darMatricula(arr.arre[i], matricula);
        if(streq(matricula, str)) {
          hay=TRUE;
          v=arr.arre[i];
        }
        else
          i++;
    } while(!hay);

  return v;
}

int cantDpto(totalVehiculos arr, dptoMatri d) {
  vehiculo v;
  int cantVeces=0;
    for(int i=0;i<arr.tope;i++) {
      v=darVehiculo(arr.arre[i]);
        if(v.dpto==d) {
          cantVeces++;
        }
    }

  return cantVeces;
}

void cantSegunTipo(totalVehiculos arr, int &cantAutos, int &cantCamionetas) {
  vehiculo v;
  cantAutos=0, cantCamionetas=0;
    for(int i=0; i<arr.tope; i++) {
      v=darVehiculo(arr.arre[i]);
        if(v.discriminante==autos) {
          cantAutos++;
        }
        else
          cantCamionetas++;
    }
}

void listarVehiculos(totalVehiculos arr) {
  vehiculo v;
    for(int i=0; i<arr.tope; i++) {
      v=darVehiculo(arr.arre[i]);
        printf("\nMatricula: ");
        print(v.matricula);
        printf(" Cedula: %ld",v.cedulaConductor);
        printf(" Hora ingreso: ");
        mostrarHoraIngreso(v.horaIngreso);
    }
    printf("\n");
}

void mostrarSegunMatricula(totalVehiculos arr, string str) {
  int i=0;
  boolean encontre = FALSE;
  vehiculo v;
    do {
      v=darVehiculo(arr.arre[i]);
        if(streq(v.matricula, str)==TRUE) {
          mostrarVehiculo(v);
          encontre=TRUE;
        }
        else
          i++;
    }while(encontre==FALSE && i<arr.tope);

    if(encontre==FALSE) {
        printf("\nEsa matricula no se encuentra en el Estacionamiento.");
    }
}

void ingresadosXHora(totalVehiculos arr, int h) {
  vehiculo v;
  hora ho;
  int cantVehiculos=0;
    printf("\n");
    for(int i=0; i<arr.tope; i++) {
      v=darVehiculo(arr.arre[i]);
      ho=darStructHora(v.horaIngreso);
        if(ho.horas==h) {
            printf("El siguiente vehiculo ingreso en el correr de esa hora: ");
            print(v.matricula);
            printf(" y lo conduce: %ld\n", v.cedulaConductor);
        }
        else
          cantVehiculos++;
    }
    if(cantVehiculos==arr.tope) {
        printf("Ningun vehiculo ingreso en el correr de esa hora");
    }
    printf("\n");
}

void camionetaSegunCapCarga(totalVehiculos arr, int a) {
  vehiculo v;
  camionetas ca;
  int i=0;
  boolean hay=FALSE;
    while(hay==FALSE && i<arr.tope) {
      v=darVehiculo(arr.arre[i]);
        if(v.discriminante==camioneta) {
          ca=darDatosCamioneta(v);
            if(ca.capCarga>a)
              hay=TRUE;
        }
      i++;
    }
    if(hay==FALSE)
        printf("\nNo hay ninguna camioneta que supere esa cantidad de carga\n");
    else {
      i=0;
        for(i=0; i<arr.tope; i++) {
          v=darVehiculo(arr.arre[i]);
            if(v.discriminante==camioneta) {
              ca=darDatosCamioneta(v);
                if(ca.capCarga>a) {
                  printf("\nLa camioneta modelo ");
                  print(arr.arre[i].datos.datosCamioneta.modelo);
                  printf(" conducida por %ld supera esa capacidad de carga\n", arr.arre[i].cedulaConductor);
                }
            }
        }
    }
}

void borrarVehiculo(totalVehiculos &arr, string str) {
  vehiculo v;
  int i=0;
  string matricula;
  boolean hay=FALSE;
    do {
        v=darVehiculo(arr.arre[i]);
        darMatricula(v, matricula);
        if(streq(matricula , str))
          hay=TRUE;
        else
          i++;
    } while(!hay);

    for(i;i<arr.tope;i++) {
      arr.arre[i]=arr.arre[i+1];
    }
  arr.tope--;
}

