#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    num = 1;

    while (num < 6000){
        printf("\nNumero actual: %d", num);
        num = num * 2;
    }
    return 0;
}
