
// Aula 1 - Estrutura de Dados - Variáveis e Memória RAM

#include <stdio.h>

int main() {
    int a = 10;
    int b, c;

    printf("&a = %p, a = %d\n", &a, a); // Endereço de memória da variável 'a', utilizamos a flag %p para imprimir o endereço, e %d para imprimir o valor
    printf("&b = %p, b = %d\n", &b, b); // Endereço de memória da variável 'b', utilizamos a flag %p para imprimir o endereço, e %d para imprimir o valor
    printf("&c = %p, c = %d\n\n", &c, c); // Endereço de memória da variável 'c', utilizamos a flag %p para imprimir o endereço, e %d para imprimir o valor

    b = 20;
    c = a + b;


    // fiz a atribuição de novos valores para b e c e imprimi novamente os valores e endereços de memória
    printf("&a = %p, a = %d\n", &a, a); 
    printf("&b = %p, b = %d\n", &b, b); 
    printf("&c = %p, c = %d\n\n", &c, c);

    return 0;
}