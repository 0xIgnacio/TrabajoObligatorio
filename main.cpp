#include <stdio.h>
#include <stdlib.h>
#include "estacionamiento.h"
#include "menu.h"

int main() {
  int menu, menu3, total;
  string str;
  vehiculo v;
  boolean valida;
  hora ho;
  estacionamiento est;
  est.arre.tope=0;
  est.totalRecaudado=0;
    do {
        system("cls");
      desplegarMenu();
        scanf("%d", &menu);
        while(menu<0 || menu>4) {
          printf("Numero invalido, ingrese denuevo: ");
            scanf("%d", &menu);
        }
        switch(menu) {
          case 1:
            // Registrar ingreso de un vehículo
              if(hayLugar(est.arre)){
                    insertarVehiculo(est.arre);
              }
              else
                printf("No hay lugar");
            break;
          case 2:
            // Registrar partida de un vehículo
            valida=FALSE;
              printf("\nIngrese la matricula del vehiculo que quiere quitar: ");
                scan(str);
                if(existeSegunMatricula(est, str)) {
                  v=obtenerVehiculo(est, str);
                    while(valida==FALSE){
                        printf("\nIngrese hora de salida ");
                        cargaHora(ho);
                        if(horaValidaSalida(v.horaIngreso, ho))
                          valida=TRUE;
                        else
                          printf("Hora invalida. ");
                    }
                  total=cobro(v, ho);
                    printf("\nSe le cobro %d", total);
                  aumentarRec(est, total);
                  quitarVehiculo(est, str);
                }
                else
                  printf("\nEsa matricula no existe en el estacionamiento");
                printf("\n\n");
                system("pause");
            break;
          case 3:
            // Menú de consultas y listados
              do {
                  system("cls");
                  desplegarMenuOp3();
                    scanf("%d", &menu3);
                  while(menu3<0 || menu3>8) {
                      printf("Numero invalido, ingrese denuevo: ");
                        scanf("%d", &menu3);
                  }
                  switch(menu3) {
                    case 1:
                      // Total recaudado
                        printf("\nEl total recaudado hasta el momento es: %d\n", darTotalRec(est));
                        printf("\n\n");
                        system("pause");
                      break;
                    case 2:
                      // Cantidad de autos y cantidad de camionetas
                      int cantAutos, cantCamionetas;
                        cantSegunTipo(est.arre,cantAutos,cantCamionetas);
                        printf("\nHay %d autos y %d camionetas\n",cantAutos,cantCamionetas);
                        printf("\n\n");
                        system("pause");
                      break;
                    case 3:
                      // Cantidad de vehículos matriculados en un departamento determinado
                      dptoMatri d;
                        cargaDpto(d);
                        printf("\nLa cantidad de vehiculos es: %d\n", cantDpto(est.arre,d));
                        printf("\n\n");
                        system("pause");
                      break;
                    case 4:
                      // Listado de vehículos registrados actualmente
                        if(darTope(est.arre)==0)
                          printf("\nNo hay vehiculos en el estacionamiento");
                        else
                          listarVehiculos(est.arre);
                        printf("\n\n");
                        system("pause");
                      break;
                    case 5:
                      // Listado detallado de un vehículo
                      string matr;
                        printf("\nIngrese la matricula del auto: ");
                        scan(matr);
                        mostrarSegunMatricula(est.arre, matr);
                        printf("\n\n");
                        system("pause");
                      break;
                    case 6:
                      // Listado de vehículos que ingresaron dentro de una hora determinada
                      int h;
                        printf("\nIngrese hora: ");
                          scanf("%d", &h);
                        ingresadosXHora(est.arre, h);
                        printf("\n\n");
                        system("pause");
                      break;
                    case 7:
                      // Listado de camionetas que superan una capacidad de carga determinada
                      int capC;
                        printf("\nIngrese capacidad de carga (Kg): ");
                          scanf("%d", &capC);
                        camionetaSegunCapCarga(est.arre, capC);
                        printf("\n\n");
                        system("pause");
                      break;
                    default:
                      break;
                  }
                } while(menu3!=8); // Si se ingresa 8 salir al menu principal
              break;
          default:
            // En caso de error
            break;
        }
    } while(menu!=4); // Si se ingresa 4 salir del programa
    cobroSalida(est);
    printf("\nEl total recaudado fue: %d\n", est.totalRecaudado);
}
