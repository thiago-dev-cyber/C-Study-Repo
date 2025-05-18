#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
 *
 * */

void print_mes(int id) {
    switch (id + 1) {
        case 1:
            printf("Janeiro\n");
            break;

        case 2:
            printf("Fevereiro\n");
            break;

        case 3:
            printf("Março\n");
            break;

        case 4:
            printf("Abril\n");
            break;

        case 5:
            printf("Maio\n");
            break;

        case 6:
            printf("Junho\n");
            break;

        case 7:
            printf("Julho\n");
            break;

        case 8:
            printf("Agosto\n");
            break;

        case 9:
            printf("Setembro\n");
            break;

        case 10:
            printf("Outubro\n");
            break;

        case 11:
            printf("Novembro\n");
            break;

        case 12:
            printf("Dezembro\n");
            break;

        default:
            printf("Mês inválido\n");
            break;
    }
}

int main (void) {
    // Declarando as variaveis que irei utiliza.
    float temperaturas[12][1];
    int maior, menor;
    
    srand(time(NULL));

    printf("Informe a temperatura media\n");
    for (int i = 0; i < 12; i++) {
       // printf("\nMês %02d Temperatura Media: ", i + 1);
       // scanf("%f", &temperaturas[i][0]);
       temperaturas[i][0] = 1 + rand() % 100;
    }

    // Decidi usar o mesmo algortmo que inverte um vetor, so que para comprar os elementos.
    for(int i = 0; i < 12 / 6; i++) {
        if (i == 0) {
            maior = i;
            menor = i; 
        }
        
        if (temperaturas[i][0] > temperaturas[maior][0]){
            maior = i;
        }

        if (temperaturas[12 - 1 - i][0] > temperaturas[maior][0]){
            maior = 12 - 1 - i;
        }
        
        if (temperaturas[i][0] < temperaturas[menor][0]){
            menor = i;
        }

        if (temperaturas[12 - 1 - i][0] < temperaturas[menor][0]){
            menor = 12 - 1 - i;
        }

    }
    
    printf("A maior temperatura registrada foi no mês de ");
    print_mes(maior);

    printf("\n");

    printf("A menor temperatura registrada foi no mês de ");
    print_mes(menor);

    printf("\n");

    return 0;
}
