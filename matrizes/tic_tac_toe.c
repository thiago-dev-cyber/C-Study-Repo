#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*
	16) Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte 
	se deseja jogar novamente.
*/

// TODO: Refactor the algorithmn and inplement minimax.

int main (void) {

	// Set a seed based in time.
	srand(time(NULL));

	// Auxiliary variables.
	char board[3][3];
	int line = 0;
	int column = 0;
	int winner = 0;
	char play_again;

	// Main function.
	do {
		usleep(500000);
		// Clear a board.
		for (int line = 0; line < 3; line++) {
			for (int column = 0; column < 3; column++) {
				board[line][column] = '*';
			}
		}

		while (winner == 0) {
			system("clear");
			// Drawing a board in console.
			for (int line = 0; line < 3; line++) {
				for (int column = 0; column < 3; column++) {
					printf("%3c ", board[line][column]);
				}
				printf("\n\n");
			}

			// Player input.
			do {
				//printf("\nDigite o numero da LINHA: ");
				//scanf("%d", &line);

				//printf("\nDigite o numero da COLUNA: ");
				//scanf("%d", &column);
				line = rand() % 3;
				column = rand() % 3;

				if (board[line][column] != '*' && board[line][column] == 'X' || board[line][column] == 'O') {
					// printf("Está posição já está ocupada!");
				}

			} while (board[line][column] == 'X' || board[line][column] == 'O');
			board[line][column] = 'X';

			// --------------------- Check if player winner ----------------------
			for (int line = 0; line < 3; line++) {
				if (board[line][0] == 'X' && board[line][1] == 'X' && board[line][2] == 'X'){
					system("clear");
					printf("===========================\n");
	                printf("    O JOGADOR ganhou!");
	                printf("\n===========================\n");
					winner = 1;
					break;
				}
			}

			// Check the column.
			for (int column = 0; column < 3; column++) {
				if (board[0][column] == 'X' && board[1][column] == 'X' && board[2][column] == 'X') {
					system("clear");
					printf("===========================\n");
	                printf("    O JOGADOR ganhou!");
	                printf("\n===========================\n");
					winner = 1;
					break;
				}
			}

			// Check the diagonal.
			if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' || board[0][2] == 'X' && 
				board[1][1] == 'X' && board[2][0] == 'X')  {
					system("clear");
					printf("===========================\n");
	                printf("    O JOGADOR ganhou!");
	                printf("\n===========================\n");
					winner = 1;
					break;
			}
			// --------------------------------------------------------------------

			// Computer input.
			do {
				// Random choice of computer.
				line = rand() % 3;
				column = rand() % 3;
			}
			while (board[line][column] == 'X' || board[line][column] == 'O');
			board[line][column] = 'O';

			// ----------------------- Computer winner check -------------------------
			// Check the lines.
			for (int line = 0; line < 3; line++) {
				if (board[line][0] == 'O' && board[line][1] == 'O' && board[line][2] == 'O'){
					system("clear");
					printf("==========================\n");
					printf("     O COMPUTADOR ganhou!");
					printf("\n==========================\n");
					winner = 1;
					break;
				}
			}

			// Check the column.
			for (int column = 0; column < 3; column++) {
				if (board[0][column] == 'O' && board[1][column] == 'O' && board[2][column] == 'O') {
					system("clear");
					printf("==========================\n");
					printf("     O COMPUTADOR ganhou!");
					printf("\n==========================\n");
					winner = 1;
					break;
				}
			}

			// Check the diagonal.
			if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' || board[0][2] == 'O' && 
				board[1][1] == 'O' && board[2][0] == 'O')  {
					system("clear");
					printf("==========================\n");
					printf("     O COMPUTADOR ganhou!");
					printf("\n==========================\n");
					winner = 1;
					break;
			}
		}
		// -----------------------------------------------------------------------------

		// Draw board.
		winner = 0;
		for (int line = 0; line < 3; line++) {
			for (int column = 0; column < 3; column++) {
				printf("%3c ", board[line][column]);
			}
			printf("\n\n");
		}

		printf("\nDeseja jogar novamente ? (S/N) \n-> ");
		scanf(" %c", &play_again);
	} while (play_again != 'N' && play_again != 'n');

}
