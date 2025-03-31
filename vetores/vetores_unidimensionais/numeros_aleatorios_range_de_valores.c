#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

    // Definindo o seed com base na hora atual.
    srand(time(NULL));

    // Declarando um vetor de inteiros com o tamanho 30.
    int numeros[30];


    for (int i = 0; i < 30; i++) {
        numeros[i] = 1 + rand() % 100; // pegando valores pseudo randomicos entre 1 e 100
    }

    for (int i = 0; i < 30; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}
