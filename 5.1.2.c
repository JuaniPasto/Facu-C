#include <stdio.h>

int main(){

    char caracter;
    int mayus, minus, nums, otros;

    caracter = ' ';

    while (caracter != '*'){

        printf("\nEscriba un caracter: \t");
        scanf(" %c", &caracter);

        if (caracter >= '0' && caracter <= '9'){
            nums++;
        }else{
            if (caracter >= 'a' && caracter <= 'z'){
                minus++;
            }else{
                if (caracter >= 'A' && caracter <= 'Z'){
                    mayus++;
                }else{
                    if (caracter != '*'){
                        otros++;

                    }

                    }


                }

            }
    }

    printf("\n\n**********************************************");
    printf("\nCantidade de numeros ingresados: %d", nums);
    printf("\nCantidad de minusculas ingresadas: %d", minus);
    printf("\nCantidad de mayusculas ingresadas: %d", mayus);
    printf("\nCantidad de simbolos ingresados: %d", otros);
    printf("\n**********************************************");

    return 0;
}
