#include <stdio.h>
#include <stdlib.h>

int main(){

    int code, cant, caja, unidades;
    float pagar;

    printf("\nIngrese el codigo del articulo: \t");
    scanf("%d", &code);
    printf("\nIngrese la cantidad de articulos comprados: \t");
    scanf("%d", &cant);

    switch (code) {
        case 1:
        case 10:
        case 100:
            pagar = (cant * 1000);
            printf("\nARTICULO %d   CANTIDAD %d   IMPORTE A PAGAR $ %.2f", code, cant, pagar);
            break;
        case 2:
        case 22:
        case 222:
            caja = cant / 10;
            unidades = cant % 10;
            pagar = ((caja * 6500) + (unidades * 700));
            printf("\nARTICULO %d   CANTIDAD %d   IMPORTE A PAGAR $ %.2f", code, cant, pagar);
            break;
        case 3:
        case 33:
            if (cant > 10)
                pagar = ((cant * 300) * 0.9);
            else
                pagar = (cant * 300);
            printf("\nARTICULO %d   CANTIDAD %d   IMPORTE A PAGAR $ %.2f", code, cant, pagar);
            break;
        case 4:
        case 44:
            pagar = (cant * 100);
            printf("\nARTICULO %d   CANTIDAD %d   IMPORTE A PAGAR $ %.2f", code, cant, pagar);
            break;
        default:
            printf("\nIngresaste un codigo no reconocido. ");
            break;


    }

    return 0;
}
