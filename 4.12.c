#include <stdio.h>
#include <stdlib.h>

int main(){

    int paciente, pagar;
    char code;

    printf("\nIngrese el codigo: ");
    scanf("%c", &code);
    printf("\nIngrese el numero de historial del paciente: ");
    scanf("%d", &paciente);

    switch (code) {
        case 'A':
        case 'a':
            pagar = 17000;
            printf("\nNUMERO DE HISTORIAL: %d   CODIGO: %c   IMPORTE A PAGAR: %d", paciente, code, pagar);
            break;
        case 'D':
        case 'd':
            pagar = 24000;
            printf("\nNUMERO DE HISTORIAL: %d   CODIGO: %c   IMPORTE A PAGAR: %d", paciente, code, pagar);
            break;
        case 'F':
        case 'f':
            pagar = 31000;
            printf("\nNUMERO DE HISTORIAL: %d   CODIGO: %c   IMPORTE A PAGAR: %d", paciente, code, pagar);
            break;
        case 'M':
        case 'm':
            pagar = 45000;
            printf("\nNUMERO DE HISTORIAL: %d   CODIGO: %c   IMPORTE A PAGAR: %d", paciente, code, pagar);
            break;
        case 'T':
        case 't':
            pagar = 55000;
            printf("\nNUMERO DE HISTORIAL: %d   CODIGO: %c   IMPORTE A PAGAR: %d", paciente, code, pagar);
            break;
        default:
            printf("\nIngresaste un codigo invalido");
            break;






    }













    return 0;
}
