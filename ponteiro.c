#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *p1 = NULL;
    int *p2;

    printf("Endereço de memória de &a: %p, valor de a = %d\n", &a, a);
    printf("Endereço de memória p1: %p, valor apontado por p1: %p\n", &p1, p1);
    printf("Endereço de memória p2: %p, valor apontado por p2: %p\n\n", &p2, p2);

    p1 = &a;
    p2 = p1;
    *p2 = 4;

    printf("Endereço de memória &a: %p, Valor de a: %d\n", &a, a);
    printf("Endereço de memória &p1: %p, valor apontado por p1 = %p, valor do ponteiro *p1 = %d\n", &p1, p1, *p1);
    printf("Endereço de memória &p2: %p, valor apontado por p2 = %p, valor do ponteiro *p2 = %d\n", &p2, p2, *p2);
    return 0;
}