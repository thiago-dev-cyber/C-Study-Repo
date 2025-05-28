#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main(void) {

	// Set the seed.
	srand(time(NULL));
	
	// Defining the variables.
	int line_s = 6;
	int mat[7][7];
	int line;
	int column;
	
	// Populating the matrix.
	for (line = 0; line < 7; line++) {
		for (column = 0; column < 7; column++) {
			mat[line][column] = rand() % 100;
		}
	}
	
	// Dranwing the matrix in the console.
	for (line = 0; line < 7; line++) {
		for (column = 0; column < 7; column++) {
			printf("%3d ", mat[line][column]);
		}
		printf("\n\n");
	}
	
	
	// Dranwing the second diagonal
	for (line = 0; line < 7; line++) {
		for (column = 0; column < 7; column++) {
			if (column == line_s) {
				printf("%3d ", mat[line][column]);
			}
			else {
				printf("  * ");
			}
		}
		printf("\n\n");
		line_s--;
	}
}
