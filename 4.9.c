#include <stdio.h>
#include <stdlib.h>

int main(){

    int libros, trecenas, decenas, unidades;
    float pagar;

    printf("\nIngrese la cantidad de libros a comprar: \t");
    scanf("%d", &libros);

    if (libros >= 30){

        trecenas = libros / 30;

        decenas = (libros % 30) / 10;

        unidades = ((libros % 30) % 10);


        if (libros > 50){
            pagar = (((trecenas * 250000) + (decenas * 80000) + (unidades * 9000)) * 0.9);
            printf("\nTotal a pagar: %.2f", pagar);
        }else{
            pagar = ((trecenas * 250000) + (decenas * 80000) + (unidades * 9000));
            printf("\nTotal a pagar: %.2f", pagar);
        }
    }else{
        decenas = libros / 10;

        unidades = libros % 10;

        pagar = ((decenas * 80000) + (unidades * 9000));
        printf("\nTotal a pagar: %.2f", pagar);
    }












    return 0;
}
