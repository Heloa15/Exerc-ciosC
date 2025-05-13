#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibe o menu
        printf("Escolha uma opcao: \n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Somar
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
        }
        else if (opcao == 2) {
            // Subtrair
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
        }
        else if (opcao == 3) {
            // Sair
            printf("Saindo do programa.\n");
        }
        else {
            //Apenas else para caso o usuário escolha um número diferente 
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
