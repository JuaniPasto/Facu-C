#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3, num4;

    printf("\nIngrese el primer numero: \t");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero: \t");
    scanf("%d", &num2);
    printf("\nIngrese el tercer numero: \t");
    scanf("%d", &num3);
    printf("\nIngrese el cuarto numero: \t");
    scanf("%d", &num4);

    if (num1 < num2)
        if (num2 < num3)
            if (num3 < num4)
                printf("\nEl menor numero es %d y esta en la posicion 1. ", num1);
            else
                if (num1 < num4)
                    printf("\nEl menor numero es %d y esta en la posicion 1. ", num1);
                else
                    printf("\nEl menor numero es %d y esta en la posicion 4. ", num4);






    return 0;
}
