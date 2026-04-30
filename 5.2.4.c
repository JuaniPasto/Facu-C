#include <stdio.h>

int main(){

    int num, suma, I;

    printf("\nIngrese la cantidad de numeros naturales a sumar: \t");
    scanf("%d", &num);

    for(I = 1; I <= num; I += 1){
        suma += I;
    }

    printf("\nLa suma de los primeros %d numeros naturales es:  %d", num, suma);

    return 0;
}
