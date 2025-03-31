#include <stdio.h>

/*
    A declaração de um vetor se da por meio do seu 'tipo', 'nome' e 'tamanho'.

    type <int> name <notas> size <5>
    int notas[5];
*/

int main(void) {
    // Inicializando um vetor com tamanho 10, sem valores definidos
    int num1[10]; // Valores não definidos

    // Inicializando um vetor com valores específicos
    int num2[] = {1, 3, 9, 2, 3, 9}; // O tamanho do vetor será 6

    // Definindo o tamanho e inicializando parcialmente com valores
    int num3[5] = {6, 7, 3}; // O vetor será {6, 7, 3, 0, 0}

    // Inicializando todos os valores do vetor com 0
    int num5[5] = {0}; // O vetor será {0, 0, 0, 0, 0}

    // Vetor de caracteres
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    // Vetor de numeros de ponto flutuante (float).
    float notas [3] = {9.0, 9.2, 9.9};

    // Imprimir as vogais.
    for (int i = 0; i < 5; i++) {
        printf("%c ", vogais[i]);
    }

    printf("\n");

    // Imprimir as notas.
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", notas[i]);
    }

    printf("\n"); 
    return 0;
}

