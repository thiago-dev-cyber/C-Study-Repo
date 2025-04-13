#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * 2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
 * em um terceiro vetor. Imprima os três vetores na tela
*/

int main(void) {
    // Definindo uma sememente baseada na hora atual.
    srand(time(NULL));

    int vet1[25];
    int vet2[25];
    int vet3[25];
    
    // Populando os vetores com valores aleatorios.
    for (int i = 0; i < 25; i++) {
        vet1[i] = 1 + rand() % 100;
        vet2[i] = 1 + rand() % 100;

        // Fazendo a soma dos vetores
        vet3[i] = vet1[i] + vet2[i];
    }

    // Imprimindo o vet1.
    printf("\nVetor 1: ");
    for (int c = 0; c < 25; c++) {
        printf("%d ", vet1[c]);
    }
   
    // Imprimindo o vet2
    printf("\nVetor 2: ");
    for (int c = 0; c < 25; c++) {
        printf("%d ", vet2[c]);
    }

    // Imprimindo o vet3
    printf("\nVetor 3: ");
    for (int c = 0; c < 25; c++) {
        printf("%d ", vet3[c]);
    }
    printf("\n");
    return 0;
}
