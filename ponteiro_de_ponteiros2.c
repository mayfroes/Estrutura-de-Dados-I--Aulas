#include <stdio.h>
#include <stdlib.h>

int main() {
    float z = 2.5; // variável float
    float *fp; // ponteiro para float

    fp = &z; // atribuindo o endereço de z ao ponteiro fp

    printf("\nValor de &z = %f\n", *&z); // endereço e valor de z
    printf("Valor de *fp = %f\n", *fp); // valor apontado por fp (valor de z)
    printf("Valor de **&fp = %f\n", **&fp); // valor apontado por *fp (valor de z)

    return 0;
}