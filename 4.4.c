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
        if (num2 > num3)
            printf("\nEl orden de menor a mayor es: %d, %d, %d", num3, num2, num1);
        else
            printf("\nEl orden de menor a mayor es: %d, %d, %d", num2, num3, num1);
    else
        if (num2 > num1 && num2 > num3)
            if (num1 > num3)
                printf("\nEl orden de menor a mayor es: %d, %d, %d", num3, num1, num2);
            else
                printf("\nEl orden de menor a mayor es: %d, %d, %d", num1, num3, num2);
        else
            if (num3 > num1 && num3 > num2)
                if (num1 > num2)
                    printf("\nEl orden de menor a mayor es: %d, %d, %d", num2, num1, num3);
                else
                    printf("\nEl orden de menor a mayor es: %d, %d, %d", num1, num2, num3);
            else
                printf("\nTodos los numeros son iguales. ");


    return 0;
}
