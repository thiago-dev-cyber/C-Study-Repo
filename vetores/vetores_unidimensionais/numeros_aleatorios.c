#include <stdio.h>
#include <stdlib.h> 
#include <time.h> //  Biblioteca para acessar a hora atual do sistema.

int main(void) {
    
    // Declaração de um vetor de inteiros com o nome numeros. 
    int numeros[10];
 
    // Definindo a seed com base na hora atual para que valores pseudos aleatorios sejam gerados.
    srand(time(NULL));

    // Interando sobre o vetor e adicionando valores aleatorios.
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand();
    }

    // Imprimindo na tela os valores contidos dentro do vetor.
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}
