#include <stdio.h>

int main (void) {

    // Vetor de interos com tamanho 10.
    int numeros[10]; 

    // Loop para poder adicionar os valores no vetor.
    for (int i = 0; i < 10; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &numeros[i]);
        printf("\n");
    }

    // Loop para imprimir os valores contidos no vetor.
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
