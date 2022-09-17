#include <stdio.h>
#include "Departamentos.h"

void cargaDpto(dptoMatri d)
{
    boolean correcto=FALSE
    printf("Ingrese en que departamento esta matriculado el vehiculo:");
    printf("\n1-Artigas\n2-Canelones\n3-Cerro Largo\n4-Colonia\n5-Durazno\n6-Flores\n7-Florida");
    printf("\n8-Lavalleja\n9-Maldonado\n10-Montevideo\n11-Paysandu\n12-Rio Negro\n13-Rivera");
    printf("\n14-Rocha\n15-Salto\n16-San Jose\n17-Soriano\n18-Tacuarembo\n19-Treinta y Tres");
    do{
    int num=0;
    scanf("%d",&num);
        switch(num) {
            case 1:
                dptoMatri=ARTI;
                correcto=TRUE;
            break;
        case 2:
            dptoMatri=CANE;
            correcto=TRUE;
            break;
        case 3:
            dptoMatri=CERRO;
            correcto=TRUE;
            break;
        case 4:
            dptoMatri=COL;
            correcto=TRUE;
            break;
        case 5:
            dptoMatri=DUR;
            correcto=TRUE;
            break;
        case 6:
            dptoMatri=FLORES;
            correcto=TRUE;
            break;
        case 7:
            dptoMatri=FLOR;
            correcto=TRUE;
            break;
        case 8:
            dptoMatri=LAVA;
            correcto=TRUE;
            break;
        case 9:
            dptoMatri=MALDO;
            correcto=TRUE;
            break;
        case 10:
            dptoMatri=MONTE;
            correcto=TRUE;
            break;
        case 11:
            dptoMatri=PAYSA;
            correcto=TRUE;
            break;
        case 12:
            dptoMatri=RION;
            correcto=TRUE;
            break;
        case 13:
            dptoMatri=RIVE;
            correcto=TRUE;
            break;
        case 14:
            dptoMatri=ROCHA;
            correcto=TRUE;
            break;
        case 15:
            dptoMatri=SALTO;
            correcto=TRUE;
            break;
        case 16:
            dptoMatri=SJ;
            correcto=TRUE;
            break;
        case 17:
            dptoMatri=SORIA;
            correcto=TRUE;
            break;
        case 18:
            dptoMatri=TACUA;
            correcto=TRUE;
            break;
        case 19:
            dptoMatri=TRYTR;
            correcto=TRUE;
            break;
        default:
            printf("El numero debe ser entre 1 y 19, ingrese devuelta el numero: ");
        }
    }while(correcto==FALSE);
}

void mostrarDpto(dptoMatri d) {
        switch(d) {
            case ARTI:
                printf("El departamento es Artigas");
            case CANE:
                printf("El departamento es Canelones");
            case CERRO:
                printf("El departamento es Cerro Largo");
            case COL:
                printf("El departamento es Colonia");
            case DUR:
                printf("El departamento es Durazno");
            case FLORES:
                printf("El departamento es Flores");
            case FLOR:
                printf("El departamento es Florida");
            case LAVA:
                printf("El departamento es Lavalleja");
            case MALDO:
                printf("El departamento es Maldonado");
            case MONTE:
                printf("El departamento es Montevideo");
            case PAYSA:
                printf("El departamento es Paysandu");
            case RION:
                printf("El departamento es Rio Negro");
            case RIVE:
                printf("El departamento es Rivera");
            case ROCHA:
                printf("El departamento es Rocha");
            case SALTO:
                printf("El departamento es Salto");
            case SJ:
                printf("El departamento es San Jose");
            case SORIA:
                printf("El departamento es Soriano");
            case TACUA:
                printf("El departamento es Tacuarembo");
            case TRYTR:
                printf("El departamento es Treinta y Tres");
            default:
                printf("Error");
        }
}
