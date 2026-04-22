#include <stdio.h>
#include <stdlib.h>

int main(){

    int trabajadas;
    float valor, paga;

    printf("\nIngrese la cantidad de horas trabajadas: \t");
    scanf("%d", &trabajadas);
    printf("\nIngrese el valor por cada hora trabajada: \t");
    scanf("%f", &valor);

    if (trabajadas > 150){
        paga = (trabajadas * (valor * 1.3));
        printf("\nSu sueldo será de %.2f", paga);
    }else{
        if (trabajadas > 50){
            paga = (trabajadas * (valor * 1.2));
            printf("\nSu sueldo será de %.2f", paga);
        }else{
            paga = (trabajadas * valor);
            printf("\nSu sueldo será de %.2f", paga);
        }
    }

    return 0;
}
