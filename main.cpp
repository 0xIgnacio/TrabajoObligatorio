#include <stdio.h>
#include "Menu.h"
#include "Estacionamiento.h"

int main() {
  int menu;
    do {
        desplegarMenu();
          scanf("%d", &menu);
          while(menu<0 || menu>4) {
              printf("Numero invalido, ingrese denuevo: ");
                scanf("%d", &menu);
          }
      estacionamiento est;
          switch(menu) {
            case 1:
              insertarVehiculo(est.arre);
              break;
            case 2:
            case 3:
            default:
          }
    } while(menu!=4);

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
