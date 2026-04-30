#include <stdio.h>

int main(){

    int Suma, I;

    for(I = 100; I >= 50; I -= 5){
        Suma += I;
    }

    printf("\n%d", Suma);

    return 0;
}
