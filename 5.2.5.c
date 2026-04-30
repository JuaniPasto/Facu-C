#include <stdio.h>

int main(){

    int num, cant, I, sum_3, mult_5, par;

    printf("\nIngrese la cantidad de numeros naturales a escribir: \t");
    scanf("%d", &cant);

    for(I = 1; I <= cant; I += 1){
        num = 0;
        printf("\nIngrese un numero entero: \t");
        scanf("%d", &num);

        if (num % 3 == 0){
            sum_3 += num;
        }else{
            if (num % 5 == 0){
               mult_5 += 1;
            }
    }
        if (I % 2 == 0){
            par += num;
        }
    }

    printf("\n***************************************************************************");
    printf("\nLa sumatoria de los valores multiplos de 3 es: %d", sum_3);
    printf("\nLa cantidad de numeros multiplos de 5 es: %d", mult_5);
    printf("\nLa sumatoria de todos los numeros ingresados en orden par es: %d", par);
    printf("\n***************************************************************************");
    return 0;
}
