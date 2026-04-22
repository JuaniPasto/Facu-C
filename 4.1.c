#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3;

    printf("\nIngrese el primer numero: \t");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero: \t");
    scanf("%d", &num2);
    printf("\nIngrese el tercer numero: \t");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
        printf("\nEl numero %d es el mas grande", num1);
    else
        if (num2 > num1 && num2 > num3)
            printf("\nEl numero %d es el mas grande", num2);
        else
            if (num3 > num1 && num3 > num2)
                printf("\nEl numero %d es el mas grande", num3);
            else
                printf("\nTodos los numeros son iguales.");


    return 0;
}
