#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
matriz 4 x 4.
*/

int main (void) {
	
	srand(time(NULL));
	
	int size;
	int line;
	int column;
	int mat[4][4];
	
	for (line = 0; line < 4; line++) {
		for (column = 0; column < 4; column++) {
			mat[line][column] = rand() % 100;
		}
	}
	
	
	for (line = 0; line < 4; line++) {
		for (column = 0; column < 4; column++) {
			printf("%3d ", mat[line][column]);
		}
		printf("\n\n");
	}	
	
	size = 0;
	for (line = 0; line < 4; line++) {
		for (column = 0; column < 4; column++) {
			if (size <= column) {
				if (size - 1 > -1) {
					printf("%3d ", mat[line][column-1]);
				}
				else {
					printf("   ");
				}
				
			}
			else {
				printf("   ");
			}
		}
		printf("\n\n");
		size++;
	}
	
	
}
