#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
13) Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
tela.
*/

int main(void) {
	
	// Set a seed.
	srand(time(NULL));
		
	int mat[5][4];
	int mat_t [4][5];
	int line;
	int column;
	
	// Populating a matrix.
	for (line = 0; line < 5; line++) {
		for (column = 0; column < 4; column++) {
			mat[line][column] = rand() % 100;
			mat_t[column][line] = mat[line][column];
		}
	}
	
	// Drawing the comun matrix in console.
	printf("\n===============================================\n");
	printf("                Matriz Comun");
	printf("\n===============================================\n");
		
	for (line = 0; line < 5; line++) {
		for (column = 0; column < 4; column++) {
			printf("%3d ", mat[line][column]);
		}
		printf("\n\n");
	}
	
	// Drawing the transpost matrix in consle. 
	printf("===============================================\n");
	printf("                Matriz Transposta");
	printf("\n===============================================\n");
		
		for (line = 0; line < 4; line++) {
			for (column = 0; column < 5; column++) {
				printf("%3d ", mat_t[line][column]);
			}
			printf("\n\n");
		}
	printf("\n===============================================\n");
		
	
}
