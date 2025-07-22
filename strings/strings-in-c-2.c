#include <stdio.h>

int main (void) {
	char userName[10];

	printf("\nPlease enter your name: ");
	fgets(userName, 10, stdin);

	printf("\nHello %s\n", userName);
}