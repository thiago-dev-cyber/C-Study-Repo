#include <stdio.h>

/*
 * 1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
 * Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
 * fim, imprima os dois vetores.
*/

int main(void) {

    // Declarando o vetor
    int vet1[10];
    int vet2[10]; 

    // Interando sobre o vetor enquanto solicito os valores para o usuario.
    for (int i = 0; i < 10; i++) {
        printf("\n%d -> ", i+1);
        scanf("%d", &vet1[i]);
        
        // Calculando o quadrado do numero digitado e salvando no vetor 2.
        vet2[i] = vet1[i] * vet1[i];
    }

    // Imprimindo os valores dos dois vetores.
    
    printf("\nVetor 1\n");
    for (int c = 0; c < 10; c++) {
        printf("%d ", vet1[c]);
    }
    
    printf("\nVetor 2\n");
    for (int c = 0; c < 10; c++) {
        printf("%d ", vet2[c]);
    }
    printf("\n");
}
