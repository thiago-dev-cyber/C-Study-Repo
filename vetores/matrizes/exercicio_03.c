#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
 * o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
 * modificado.
*/

// Definindo a seed baseada no horario.

int main(void) {
    srand(time(NULL));

    // Declarando a variavel para que possamos ultiliza-la mais tarde.
    int vetor[20];
    int swap;
    // Laço de repetição para coletar a entrada do usuario.
    for (int i = 0; i < 20; i++){
        //printf("\nvetor[%d] -> ");
        //scanf("%d", vetor[i]);
        vetor[i] = 1 + rand() % 50;
    }
    
    printf("Numeros informados: ");
    // Funçao para imprimir na tela o vetor.
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    // Invertendo o vetor.  
    for (int i = 0; i < 20 / 2; i++){
        swap = vetor[20 - 1 - i];  // 20 -> tamanho do vetor, 20 - 1 -> 19 ultimo indice.
        vetor[20 - 1 - i] = vetor[i];
        vetor[i] = swap;
    }
    
    printf("\nVetor invertido: ");

    // Funçao para imprimir na tela o vetor.
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
