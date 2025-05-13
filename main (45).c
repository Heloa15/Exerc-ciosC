#include <stdio.h>

// Definindo a struct Produto
struct Produto {
    char nome[100];
    float preco;
    int quantidade;
};

int main() {
    struct Produto produtos[5];
    int i;

    // Cadastro dos produtos
    for(i = 0; i < 5; i++) {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome); 

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        printf("\n");
    }

    // Impressão dos totais
    printf("Resumo dos Produtos:\n");
    for(i = 0; i < 5; i++) {
        float total = produtos[i].preco * produtos[i].quantidade;
        printf("Produto: %s\n", produtos[i].nome);
        printf("Preço: R$ %.2f | Quantidade: %d | Total: R$ %.2f\n\n",
               produtos[i].preco, produtos[i].quantidade, total);
    }

    return 0;
}
