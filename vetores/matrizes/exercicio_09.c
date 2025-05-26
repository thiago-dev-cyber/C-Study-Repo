#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
 a) some cada uma das linhas armazenando o resultado em um vetor
 b) some cada uma das colunas armazenando o resultado em um vetor;
 c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
 * */

const int line_size = 5;
const int column_size = 10;

void print_vetor(int *vetor, int size) {
    printf("\nVetor = ");
    for (int element = 0; element  < size; element++) {
        printf("%d ", vetor[element]);
    }
    printf("\n");
}

void print_matriz(int line, int column, int matriz[line][column]) {
    printf("\nMatriz:\n");
    for (int l = 0; l < line; l++) {
        for (int c = 0; c < column; c++) {
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }
}

int main(void) {

    // Defined a seed for generated random numbers.
    srand(time(NULL));

    int matriz[line_size][column_size];
    int sum_line[line_size];
    int sum_column[10] = {0};

    // Populate a matriz with random numbers
    for (int line = 0; line < line_size; line++) {
        for (int column = 0; column < column_size; column++) {
            matriz[line][column] = 1 + rand() % 100;

            //printf("\ndigite um valor para matriz[%d][%d]: ", line, column);
            //scanf("%d", &matriz[line][column]);
        }
    }
    print_matriz(line_size, column_size, matriz);
    

    // Sum lines;

    int sum_lines = 0;
    for (int l = 0; l < line_size; l++) {
        for (int c = 0; c < column_size; c++) {
            sum_lines += matriz[l][c];
        };
        sum_line[l] = sum_lines;
        sum_lines = 0;
    }

    // Sum Column
    
    for (int l = 0; l < line_size; l++) {
        for (int c = 0; c < column_size; c++) {
            sum_column[c] += matriz [l][c];
        }
    }
    printf("\nSoma das Linhas: \n");
    print_vetor(sum_line, line_size);

    printf("\nSoma das Colunas: \n");
    print_vetor(sum_column, column_size);


}
