#include <stdio.h>
#include "Departamentos.h"

void cargaDpto(dptoMatri &d) {
  boolean correcto=FALSE;
    printf("\nIngrese en que departamento esta matriculado el vehiculo:");
    printf("\n1-Artigas\n2-Canelones\n3-Cerro Largo\n4-Colonia\n5-Durazno\n6-Flores\n7-Florida");
    printf("\n8-Lavalleja\n9-Maldonado\n10-Montevideo\n11-Paysandu\n12-Rio Negro\n13-Rivera");
    printf("\n14-Rocha\n15-Salto\n16-San Jose\n17-Soriano\n18-Tacuarembo\n19-Treinta y Tres\n\nIngrese: ");
    do {
      int num=0;
        scanf("%d",&num);
        switch(num) {
          case 1:
            d=ARTI;
            correcto=TRUE;
            break;
          case 2:
            d=CANE;
            correcto=TRUE;
            break;
          case 3:
            d=CERRO;
            correcto=TRUE;
            break;
          case 4:
            d=COL;
            correcto=TRUE;
            break;
          case 5:
            d=DUR;
            correcto=TRUE;
            break;
          case 6:
            d=FLORES;
            correcto=TRUE;
            break;
          case 7:
            d=FLOR;
            correcto=TRUE;
            break;
          case 8:
            d=LAVA;
            correcto=TRUE;
            break;
          case 9:
            d=MALDO;
            correcto=TRUE;
            break;
          case 10:
            d=MONTE;
            correcto=TRUE;
            break;
          case 11:
            d=PAYSA;
            correcto=TRUE;
            break;
          case 12:
            d=RION;
            correcto=TRUE;
            break;
          case 13:
            d=RIVE;
            correcto=TRUE;
            break;
          case 14:
            d=ROCHA;
            correcto=TRUE;
            break;
          case 15:
            d=SALTO;
            correcto=TRUE;
            break;
          case 16:
            d=SJ;
            correcto=TRUE;
            break;
          case 17:
            d=SORIA;
            correcto=TRUE;
            break;
          case 18:
            d=TACUA;
            correcto=TRUE;
            break;
          case 19:
            d=TRYTR;
            correcto=TRUE;
            break;
          default:
            printf("El numero debe ser entre 1 y 19, ingrese devuelta el numero: ");
        }
    } while(correcto==FALSE);
}

void mostrarDpto(dptoMatri d) {
    switch(d) {
      case ARTI:
        printf("\nEl departamento es Artigas");
        break;
      case CANE:
        printf("\nEl departamento es Canelones");
        break;
      case CERRO:
        printf("\nEl departamento es Cerro Largo");
        break;
      case COL:
        printf("\nEl departamento es Colonia");
        break;
      case DUR:
        printf("\nEl departamento es Durazno");
        break;
      case FLORES:
        printf("\nEl departamento es Flores");
        break;
      case FLOR:
        printf("\nEl departamento es Florida");
        break;
      case LAVA:
        printf("\nEl departamento es Lavalleja");
        break;
      case MALDO:
        printf("\nEl departamento es Maldonado");
        break;
      case MONTE:
        printf("\nEl departamento es Montevideo");
        break;
      case PAYSA:
        printf("\nEl departamento es Paysandu");
        break;
      case RION:
        printf("\nEl departamento es Rio Negro");
        break;
      case RIVE:
        printf("\nEl departamento es Rivera");
        break;
      case ROCHA:
        printf("\nEl departamento es Rocha");
        break;
      case SALTO:
        printf("\nEl departamento es Salto");
        break;
      case SJ:
        printf("\nEl departamento es San Jose");
        break;
      case SORIA:
        printf("\nEl departamento es Soriano");
        break;
      case TACUA:
        printf("\nEl departamento es Tacuarembo");
        break;
      case TRYTR:
        printf("\nEl departamento es Treinta y Tres");
        break;
      default:
        printf("\nError");
        break;
    }
}
