#include <stdio.h>
#include <stdlib.h>

int main(){

    float sueldo, extra, paga;
    char code;

    printf("\nIndique el sueldo basico del trabajador: \t");
    scanf("%f", &sueldo);
    printf("\nIngrese la cantidad de horas extras trabajadas: \t");
    scanf("%f", &extra);
    printf("\nIndique el codigo del trabajador: \t");
    scanf(" %c", &code);

    switch (code) {
        case 'A':
        case 'a':
            paga = (sueldo + (extra  * 8000));
            printf("\nPAGA TOTAL: %.2f", paga);
            break;
        case 'B':
        case 'b':
            paga = (sueldo + (extra  *8800));
            printf("\nPAGA TOTAL: %.2f", paga);
            break;
        case 'C':
        case 'c':
            paga = (sueldo + (extra  * 10000));
            printf("\nPAGA TOTAL: %.2f", paga);
            break;
        case 'D':
        case 'd':
            paga = (sueldo + (extra  * 12000));
            printf("\nPAGA TOTAL: %.2f", paga);
            break;
        case 'E':
        case 'e':
            paga = (sueldo + (extra  * 14000));
            printf("\nPAGA TOTAL: %.2f", paga);
            break;
        default:
            printf("\nIngresaste un codigo invalido. ");
            break;








    }














    return 0;
}
