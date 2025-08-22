#include <stdio.h>

int main() {
    // utilizamos a função sizeof para determinar o tamanho dos tipos de dados, em bytes

    
    int a; // Declarando uma variável inteira 'a'

    printf("Tamanho dos tipos de dados:\n\n"); // Exibindo o título
    printf("sizeof(a) = %ld bytes\n", sizeof(a)); // Tamanho da variável 'a' em bytes

    printf("sizeof(int) = %ld bytes\n", sizeof(int)); // Tamanho do tipo inteiro
    printf("sizeof(short) = %ld bytes\n", sizeof(short)); // Tamanho do tipo short
    printf("sizeof(long) = %ld bytes\n", sizeof(long)); // Tamanho do tipo long
    printf("sizeof(long long) = %ld bytes\n", sizeof(long long)); // Tamanho do tipo long long
    printf("sizeof(float) = %ld bytes\n", sizeof(float)); // Tamanho do tipo float
    printf("sizeof(double) = %ld bytes\n", sizeof(double)); // Tamanho do tipo double
    printf("sizeof(char) = %ld bytes\n\n", sizeof(char)); // Tamanho do tipo char

    printf("sizeof(void*) = %ld bytes\n", sizeof(void*)); // Tamanho de um ponteiro genérico
    printf("sizeof(int*) = %ld bytes\n", sizeof(int*)); // Tamanho de um ponteiro para int
    printf("sizeof(int**) = %ld bytes\n", sizeof(int**)); // Tamanho de um ponteiro para ponteiro de int
    printf("sizeof(int  ***) = %ld bytes\n", sizeof(int***)); // Tamanho de um ponteiro para ponteiro de ponteiro de int
    printf("sizeof(float *) = %ld bytes\n", sizeof(float*)); // Tamanho de um ponteiro para float
}
