#include <stdio.h>
#include "estacionamiento.h"
#include "menu.h"

int main() {
  int menu, menu3;
  estacionamiento est;
  est.arre.tope=0;
  est.totalRecaudado=0;
    do {
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
            string str;
              printf("Ingrese la matricula del vehiculo que quiere quitar: ");
                scan(str);
                if(existeSegunMatricula(est, str))
                  quitarVehiculo(est, str);
                else
                  printf("Esa matricula no existe en el estacionamiento");
            break;
          case 3:
            // Menú de consultas y listados
              do {
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
                      break;
                    case 2:
                      // Cantidad de autos y cantidad de camionetas
                      int cantAutos, cantCamionetas;
                        cantSegunTipo(est.arre,cantAutos,cantCamionetas);
                        printf("\nHay %d autos y %d camionetas\n",cantAutos,cantCamionetas);
                      break;
                    case 3:
                      // Cantidad de vehículos matriculados en un departamento determinado
                      dptoMatri d;
                        cargaDpto(d);
                        printf("\nLa cantidad de vehiculos es: %d\n", cantDpto(est.arre,d));
                      break;
                    case 4:
                      // Listado de vehículos registrados actualmente
                        listarVehiculos(est.arre);
                      break;
                    case 5:
                      // Listado detallado de un vehículo
                      string matr;
                        printf("\nIngrese la matricula del auto: ");
                        scan(matr);
                        mostrarSegunMatricula(est.arre, matr);
                      break;
                    case 6:
                      // Listado de vehículos que ingresaron dentro de una hora determinada
                      int h;
                        printf("\nIngrese hora: ");
                          scanf("%d", &h);
                        ingresadosXHora(est.arre, h);
                      break;
                    case 7:
                      // Listado de camionetas que superan una capacidad de carga determinada
                      int capC;
                        printf("Ingrese capacidad de carga (Kg): ");
                          scanf("%d", &capC);
                        camionetaSegunCapCarga(est.arre, capC);
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
    printf("El total recaudado fue: %d", est.totalRecaudado);
}
