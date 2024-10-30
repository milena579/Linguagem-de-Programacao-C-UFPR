/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto{
    char nome[50];
    float preco;
} Produto;

int notaFiscal(Produto produtos[]){
    float total;
    printf("-------------- NOTA FISCAL ------------------\n");
    for (int i = 0; i < 5; i++){
        printf("%s       R$ %.2f\n", produtos[i].nome, produtos[i].preco);
        total = total + produtos[i].preco;
    }
    
    printf("Valor total: R$ %.2f", total);
}


int main()
{
    Produto produtos[5];

    for (int i = 0; i < 5; i++){
        printf("\nProduto %i \n", i+1 );
        printf("Nome:");
        scanf("%s", produtos[i].nome);
        
        printf("Preco:");
        scanf("%f", &produtos[i].preco);
    }
    
    notaFiscal(produtos);
}
