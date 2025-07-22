#include <stdio.h>  // Para usar funcoes padroes de entrada e saida.
#include <string.h> // Para usar a funcao "strlen".

// Leia uma palavra e diga se ela é palindroma.

int main (void) {
    // Definindo a variaveis que serao usadas futuramente.
    int size, palindromo ,i;
    char palavra[10];

    // Pendido para o usuario uma palavra.
    printf("Verifique se a palavra é um palavra: ");
    scanf("%10[^\n]", palavra);

    // Pegando o tamanho da palavra digitada atraves do strlen.
    size = strlen(palavra);
    
    // inicializando a variavel 'i' -> usada para interacao e a variavel 'palindromo' -> validacao.
    i = 0;
    palindromo = 0;

    // Aqui percorremos a o vetor palavra até a metade: {'A','C','E','R'} -> size 4.
    while (palavra[i] != '\0' && palindromo == 0) {
        if (i == size / 2) {
            break;
        }

        // Comparamos o primeiro caractere com o 'ultimo'
        if (palavra[i] != palavra[size-1]) {
            palindromo = 1;
        }
        i++;
        size--;
    }

    // No fim verifico se o valor da variavel palindromo é 0. 
    if (!palindromo) {
        printf("\n\tÉ palindromo!\n");
    }
    else {
        printf("\n\tNão é palindromo\n");
    }
}
