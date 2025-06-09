#include <stdio.h> 

int main (void) {

    // Strings nada mais são que uma sequencia de caracteres.
    char motd[] = {"Wellcome!\n"}; //Não definimos um valor fixo para a variavel motd.
    printf("%s", motd);

    // Definindo um vetor de tamanho 10 para receber o que o usuario digitar.
    char input[15];
    printf("Please, enter your name: ");

    // AQUI TEMOS UM PROBLEMA, recebendo a entrada do usuario desta forma, podemos causar memore leak.
    // Um outro problema é que por padrao o scanf recebe informação até encontrar o primerio espaço.
    // scanf("%s", input);

    // Resolvemos o problemas dos espaços com [^\n] e o problema do vazamento de memoria adicionando um valor maximo.
    scanf("%15[^\n]", input); // Mesmo que o usuario informe mais de 15 caracteres o que passar não será lido.
    printf("\nPassword entered: %s\n", input);
    
}
