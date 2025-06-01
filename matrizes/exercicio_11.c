#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main(void) {

	// Declaring variables.
	int mat[5][5];
	int line;
	int column;
	int size = 0;
	
	// Defining the time-based seed.
	srand(time(NULL));
	
	// Populating the matrix with random data.
	for (line = 0; line < 5; line++) {
		for (column = 0; column < 5; column++) {
			mat[line][column] = 1 + rand() % 100;
		}
	}
	
	// Drawing the matriz on the console. 
	for (line = 0; line < 5; line++) {
		for (column = 0; column < 5; column++) {
			printf("%3d ", mat[line][column]);
		}
		printf("\n\n");
	}
	
	// Displaying the main diagonal of the matrix.
	for (line = 0; line < 5; line++) {
		for (column = 0; column < 5; column++) {
			if (column == size) {
				printf("%3d ", mat[line][column]);
			}
			else {
				printf(" * ");
			}
				
		}
		printf("\n");
		size++;
	}
	
}
