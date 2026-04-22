#include <stdio.h>
#include <stdlib.h>

int main(){

    float compra, pagar;

    printf("\nIngrese el precio de su compra: \t");
    scanf("%f", &compra);

    if (compra >= 45000){
        pagar = compra * 0.895;
        printf("\nMonto a pagar: %f . Descuento aplicado: 10,5 % .", pagar);
    }else{
        if (compra >= 29550 && compra < 45000){
            pagar = compra * 0.92;
            printf("\nMonto a pagar: %f . Descuento aplicado: 8 % .", pagar);
        }else{
            if (compra < 29550){
                pagar = compra * 0.955;
                printf("\nMonto a pagar: %f . Descuento aplicado: 4,5 % .", pagar);
            }
        }
    }

    return 0;
}
