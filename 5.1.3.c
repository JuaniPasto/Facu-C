#include <stdio.h>
#include <stdbool.h>

int main(){

    // Cant = cantidad de primos
    // Cont = Contador de numeros primos

    int cant, num, div, cont;
    bool primo = true;

    num = 2;
    cont = 0;

    printf("\nIngrese la cantidad de numeros primos a mostrar en pantalla: \t");
    scanf("%d", &cant);

    while (cont < cant){
        primo = true;
        div = 2;

        while (primo == true && div <= num / 2){
            if (num % div == 0){
                primo = false;
            }else{
                div++;}
        }
        if (primo == true){
            printf("\n%d", num);
            cont++;
        }
        num++;
    }















    return 0;
}
