/*
 * 6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
 *código inteiro e faça uma das ações abaixo: 
 0 – finaliza o programa
 1 – imprime o vetor na ordem do início ao fim;
 2 – imprime o vetor na ordem inversa (do fim para o início).

 O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (void) {
    // Defined a seed for generate random numbers  
    srand(time(NULL));    
    float vetor[10];


    // Populate a vector;
    for (int i = 0; i < 10; i++) {
        //printf("\nInsert a value for position %d: ", i+1);
        //scanf("%d", &vetor[i]);
        
        vetor[i] = 1 + rand() % 100;
    }

    // choice of user.
    int option;
    while (1) {
        system("clear");
        printf("\n======================================");
        printf("\n0 - Exit \n1 - Display the vector in ascending order \n2 - Display the vectory in descending order");
        printf("\n======================================\n -> ");
        scanf("%d", &option);
       
        // Exiting a program
        if (option == 0) {
            printf("\nexiting...\n");
            exit(0);
        }
        // Display vector in ascending order
        else if (option == 1) {
            printf("\nVetor = ");
            for (int i = 0; i < 10; i++) {
                printf("%.2f ", vetor[i]);
            }           
        }
        // Display vector in descending order
        else if (option == 2) {
            printf("\nVetor = ");
            for (int i = 9; i  >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
        }
        
        // Validator choice of user.
        else {
            printf("\nPlease insert a valid option!!\n");
            sleep(2);
            }
        }




    

    return 0;
}
