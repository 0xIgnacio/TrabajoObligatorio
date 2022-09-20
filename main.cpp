#include <stdio.h>
#include "Menu.h"
#include "Estacionamiento.h"

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
                insertarVehiculo(est.arre);
              break;
            case 2:
              // Registrar partida de un vehículo
              string str;
                printf("Ingrese la matricula del vehiculo que quiere quitar: ");
                  scan(str);
                quitarVehiculo(est, str);
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
                    switch (menu3) {
                      case 1:
                        // Total recaudado
                          printf("\nEl total recaudado hasta el momento es: %d\n", est.totalRecaudado);
                        break;
                      case 2:
                        // Cantidad de autos y cantidad de camionetas
                          cantSegunTipo(est.arre);
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
                        // En caso de error
                          printf("Error");
                        break;
                    }
                } while(menu3!=8); // Si se ingresa 8 salir al menu principal
              break;
            default:
              // En caso de error
              break;
          }
    } while(menu!=4); // Si se ingresa 4 salir del programa

}





/*

int main()
{
  int menu, menu3;
    desplegarMenu();
      scanf("%d", &menu);
    if(menu<0 || menu>4) {
        do {
            printf("Numero invalido, ingrese denuevo: ");
            scanf("%d", &menu);
        } while(menu<0 || menu>5);
    }
  estacionamiento est;
    do {
        switch(menu) {
          case 1:
            break;
          case 2:
            break;
          case 3:
            desplegarMenuOp3();
              scanf("%d", &menu3);
              if(menu3<0 || menu3>4) {
                do {
                    printf("Numero invalido, ingrese denuevo: ");
                      scanf("%d", &menu3);
                } while(menu3<0 || menu3>5);
              }
              switch(menu3) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                default:
              }
            break;
          case 4:
            break;
          default:
            break;
        }
    } while
}

*/
