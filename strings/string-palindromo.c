#include <stdio.h>
#include <string.h>

// Leia uma palavra e diga se ela é palindroma.


int main (void) {
    // Aqui estamos criando um vetor de caracteres para ler a palavra.
    int size_vetor = 10;
    char palavra[size_vetor];

    printf("\nVerifique se a palavra é um palindromo \n-> ");
    scanf("%10[^\n]", palavra);
    
    printf("\n\nPalavra digitada: %s\n", palavra);
    

    int i = 0;
    while (palavra[i] != '\0') {
        printf("%d - %c\n", i, palavra[i]);
        printf("%d - negativo\n", i * -1); 
        i++;
    }
}
