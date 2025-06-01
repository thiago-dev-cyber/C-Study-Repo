#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.

// this function print a matriz
void print_matriz(int line, int column, int matriz[line][column]) {
    for (int l = 0; l < line; l++) {
        for (int c = 0; c < column; c++) {
            printf("%3d ", matriz[l][c]);
    }
    printf("\n");
    }
    printf("\n");

}

int main(void) {

    srand(time(NULL)); // set a seed for generate random numbers
    int matriz[5][7];
    int sum = 0;

    // Populate a matriz with random numbers
    for (int line = 0; line < 5; line++) {
        for (int column = 0; column < 7; column++) {
            matriz[line][column] = 1 + rand () % 100;
        }
    }
    print_matriz(5, 7, matriz);

    // Sum all array elements
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 7; c++) {
            sum += matriz[l][c];
    }
    }
    printf("\nSum of all matriz elements: %d\n", sum);

}
