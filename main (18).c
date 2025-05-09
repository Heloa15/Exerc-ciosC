#include <locale.h>
#include <stdio.h>

int main () {
    setlocale (LC_ALL,"");
    int opçao, cardapio;
    printf("Digite o numero para saber as opções do cardápio(1-5):\n");
    printf("1 - X-Burguer - R$ 10,00\n");
    printf("2 - X-Salada - R$ 12,00\n");
    printf("3 - X-Bacon - R$ 15,00\n");
    printf("4 - Hot Dog - R$ 8,00\n");
    printf("5 - Refrigerante - R$ 5,00\n");
    scanf("%d", &opçao);
    
    switch (opçao) {
        case 1:
        printf("Você escolheu X-Burguer - R$ 10,00\n");
        break;
        case 2:
        printf("Você escolheu X-Salada - R$ 12,00\n");
        break;
        case 3:
        printf("Você escolheu X-Bacon - R$ 15,00\n");
        break;
        case 4:
        printf("Você escolheu Hot Dog - R$ 8,00\n");
        break;
        case 5:
        printf("Você escolheu Refrigerante - R$ 5,00\n");
        break;
        default:
        printf("Erro! Opção inválida.\n");
    }
    
    return 0;
}
    