#include <stdio.h>

int main(){

    int num, num_pares, I, pares;
    float promedio;

    for(I = 1; I <= 50; I += 1){
        num = 0;
        printf("\nIngrese un numero entero: \t");
        scanf("%d", &num);

        if (num % 2 == 0){
            num_pares += num;
            pares++;
        }
    }

    promedio = (float)num_pares / pares;

    printf("\nEl promedio de los numeros pares de los 50 numeros es: %.2f", promedio);

    return 0;
}
