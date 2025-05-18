#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:

a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.

b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
 * */

// 2 - Pegar a quantidade vendida de cada objeto.

int main (void) {
    float valor_objetos[10];
    int qtd_vendida[10];
    
    srand(time(NULL));

    // 1 - Pegar o valor dos 10 objetos
    for (int i = 0; i < 10; i++ ) {
        //printf("Valor objeto ID %02d: ", i + 1);
        //scanf("%f", &valor_objetos);
        valor_objetos[i] = (1 + rand() % 1000) / (float) 10; 
    }
    for (int i = 0; i < 10; i++) {
        //printf("Quantidade vendida produto ID %02d: ", i + 1);
        //scanf("%d", &qtd_vendida[i]);
        qtd_vendida[i] = 1 + rand() % 100;
    }
    qtd_vendida[0] = 95;
    qtd_vendida[1] = 95;
    printf("Valor dos Objetos: ");
    for (int i = 0; i < 10; i++) {
         printf("%.2f ", valor_objetos[i]);
    }
    
    printf("\n=======================================================\n");
    printf("              Relatorio de Vendas ");
    printf("\n=======================================================\n");

    float total = 0;
    float total_vendas = 0; 
    for (int i = 0; i < 10; i++) {
        total = qtd_vendida[i] * valor_objetos[i];
        total_vendas += total;
        printf("ID: %02d \nPreco: R$ %.2f \nQuantidade Vendida: %d\nTotal de Vendas: %.2f\n", i, valor_objetos[i], qtd_vendida[i], total);
        printf("-----------------------------------------------------\n");
    }
    printf("Valor total de vendas: %.2f \nComissão: %.2f\n", total_vendas, total_vendas * 0.05);
    
    int itens_vendidos;
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            itens_vendidos = qtd_vendida[i];
        }
        
        if (qtd_vendida[i] > itens_vendidos) {
            itens_vendidos = qtd_vendida[i];
        }
    }

    printf("Itens vendidos\n");
    for (int i = 0; i < 10; i++) {
        if (itens_vendidos == qtd_vendida[i]) {
            printf("\nID: %d \nValor: %.2f \nQuantidade Vendida: %d\n", i, valor_objetos[i], itens_vendidos);
        }
    }
    
    printf("\n=======================================================\n");

    
}
