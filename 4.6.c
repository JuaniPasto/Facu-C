#include <stdio.h>
#include <stdlib.h>

int main(){

    char caracter;

    printf("\nEscriba el caracter: \t");
    scanf("%c", &caracter);

    if (caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' || caracter == 'i' || caracter == 'I' || caracter == 'o' || caracter == 'O' || caracter == 'u' || caracter == 'U')
        printf("\nVocal. Numero ascii: %d", caracter);
    else
        printf("\nNo es vocal. Numero ascii: %d", caracter);

    return 0;
}


