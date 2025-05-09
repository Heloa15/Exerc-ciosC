#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale  (LC_ALL, "");
    int opcao, numero;
    
    do {
        printf("Menu:\n");
        printf("1. Digitar um número para ver a tabuada\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um número: ");
            scanf("%d", &numero);
            exibirTabuada(numero);
        } else if (opcao != 2) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 2);

    printf("Saindo do programa. Até logo!\n");
    return 0;
}