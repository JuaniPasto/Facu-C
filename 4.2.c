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

    if (num1 < num2 && num1 < num3)
        printf("\nEl numero %d es el numero mas pequenio. ", num1);
    else
        printf("\nEl numero %d no es el mas pequenio. ", num1);

    return 0;
}
