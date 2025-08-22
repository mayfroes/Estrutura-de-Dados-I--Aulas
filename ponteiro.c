#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *p1 = NULL; // variavel ponteiro inicializada como NULL
    int *p2; // variavel ponteiro sem inicialização

    printf("Endereço de memória de &a: %p, valor de a = %d\n", &a, a); // Endereço de memória da variável 'a' e seu valor
    printf("Endereço de memória p1: %p, valor apontado por p1: %p\n", &p1, p1); //Endereço de memória do ponteiro 'p1' e o valor que ele aponta como '0' por conta da inicialização como NUL
    printf("Endereço de memória p2: %p, valor apontado por p2: %p\n\n", &p2, p2); // Endereço de memória do ponteiro 'p2' e o valor que ele aponta, que é indefinido por não ter sido inicializado

    p1 = &a; // ponteiro p1 recebe o endereço de memória da variável 'a'
    p2 = p1; // ponteiro p2 recebe o endereço de memória que p1 aponta, ou seja, o endereço de 'a'
    *p2 = 4; // o valor apontado por p2 (que é o mesmo que p1) é alterado para 4, modificando o valor de 'a'

    printf("Endereço de memória &a: %p, Valor de a: %d\n", &a, a); // Endereço de memória da variável 'a' e seu novo valor
    printf("Endereço de memória &p1: %p, valor apontado por p1 = %p, valor do ponteiro *p1 = %d\n", &p1, p1, *p1); // Endereço de memória do ponteiro 'p1', o valor que ele aponta (endereço de 'a') e o valor armazenado nesse endereço
    printf("Endereço de memória &p2: %p, valor apontado por p2 = %p, valor do ponteiro *p2 = %d\n", &p2, p2, *p2); // Endereço de memória do ponteiro 'p2', o valor que ele aponta (endereço de 'a') e o valor armazenado nesse endereço
    return 0;
}