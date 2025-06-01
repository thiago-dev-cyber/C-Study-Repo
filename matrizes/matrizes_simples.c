#include <stdio.h>

int main(void) {

	// tipo indentificado
	int mat1[3][3] = {1,2,3,4,5,6,7,8,9};

	// Interando sobre a matriz
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	return 0;
}