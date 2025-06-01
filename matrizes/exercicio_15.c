#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    15) Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.

    Uma matriz quadrada é um quadrado mágico se:
    
        – a soma de cada linha;
        – a soma de cada coluna;
        – a soma da diagonal principal, e;
        – a soma da diagonal secundária;
        forem exatamente iguais.

*/

int main (void) {
    
    // Set a seed based on time.
    srand(time(NULL));

    // Auxiliary variables.
    int line;
    int column;

    // Variables for column, check etc.
    int mat[4][4];
    int line_check[4] = {0};
    int column_check[4] = {0};
    int diagonal_01 = 0;
    int diagonal_02 = 0;

    // Populating a matrix with random data.
    for (line = 0; line < 4; line++) {
        for (column = 0; column < 4; column++) {
            mat[line][column] = rand() % 100;
        }
    }

    // Calculating the sum of lines and columns.
    for (line = 0; line < 4; line++) {
        for (column = 0; column < 4; column++) {
            line_check[line] += mat[line][column]; 
            column_check[column] += mat[line][column];
        }
    }


    // Auxiliary variables.
    int temp = 0;
    int temp_2 = 3;

    // Calculating the sum of lines and columns.
    for (line = 0; line < 4; line++) {
        for (column = 0; column < 4; column++) {
            
            if (column == temp) {
                diagonal_01 += mat[line][temp];    
            }
            
            if (column == temp_2)  {
                diagonal_02 += mat[line][temp_2];
            }
        }
        temp_2--;
        temp++;
    }

    // Cheking if the  matrix is  amagic square
    int valido = 1;
    for (line = 0; line < 4; line++) {
        if (line_check[line] != column_check[line]) {
            valido = 0;
        }
    }

    if (valido != 0) {
        if (diagonal_01 != diagonal_02) {
            valido = 0;
        }
    }

    // Drawing matrix in console.
    for (line = 0; line < 4; line++) {
        for (column = 0; column < 4; column++) {
            printf("%3d ", mat[line][column]);
        }
        printf("\n\n");
    }


    // Display in console, Diagonal sum, column and lines. 
    printf("Diagonal 1: %d\nDiagonal 2: %d\n", diagonal_01, diagonal_02);

    printf("\nSoma das linhas: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", line_check[i]);
    }

    printf("\nSoma das colunas: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", column_check[i]);
    }

    printf("\n\nÉ uma matriz magica ? \n-> ");
    if (valido == 1) {
        printf("SIM!\n");
    }
    else {
        printf("NÃO!\n");
    }
}
