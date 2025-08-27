#include <stdio.h>
#include <stdlib.h>


int main() {
    int a = 10; // variável inteira
    int *p1 = &a; // ponteiro para inteiro
    int **p2 = &p1; // ponteiro para ponteiro de inteiro

    printf("Valor de &a = %p, a = %d\n", &a, a); // endereço e valor de a
    printf("Valor de &p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1); // endereço de p1, valor de p1 (endereço de a) e valor apontado por p1 (valor de a)
    printf("Valor de &p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2); // endereço de p2, valor de p2 (endereço de p1), valor apontado por p2 (endereço de a) e valor apontado por *p2 (valor de a)


    **p2 = 99; // alterando o valor de a através do ponteiro de ponteiro

    // imprimindo novamente os valores para verificar a alteração
    printf("Valor de &a = %p, a = %d\n", &a, a); // endereço e valor de a
    printf("Valor de &p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1); // endereço de p1, valor de p1 (endereço de a) e valor apontado por p1 (valor de a)
    printf("Valor de &p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n", &p2, p2, *p2, **p2); // endereço de p2, valor de p2 (endereço de p1), valor apontado por p2 (endereço de a) e valor apontado por *p2 (valor de a)


    return 0;
}

