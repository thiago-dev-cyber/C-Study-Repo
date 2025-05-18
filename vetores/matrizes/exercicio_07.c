#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * 7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.
*/

void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

int main(void) {
    
    // Defined a seed for generate random numbers.
    srand(time(NULL));
    
    // Defined a vetor for 100 elements.
    int vector[100];

    // Populete a vector with randomic numbers.
    for (int i = 0; i < 100; i++) {
        vector[i] = 1 + rand() % 100;
    }
    
    printf("\nOriginal Vector: ");
    print_array(vector, 100);

    int pointer = 0;
    int u_pointer = 0;

    for (int i = 1; i < 100; i++) {
        pointer = vector[i];
        u_pointer = i - 1;

        while (u_pointer >= 0 && vector[u_pointer] > pointer)  {
            vector[u_pointer + 1] = vector[u_pointer];
            u_pointer = u_pointer - 1;
        }
        vector[u_pointer + 1] = pointer;
    }

    printf("\n\nOrdened  Vector: ");
    print_array(vector, 100);
}
