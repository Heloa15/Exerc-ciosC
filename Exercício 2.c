#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale  (LC_ALL, "");
    int opcao;
    float valor, ValorFinal;
    float saldo = 1000.00;
    ValorFinal = saldo;
    
    do {
        //Exibe o Menu
        printf ("Banco Cash Up - Opções: \n");
        printf ("1 - Depositar dinheiro \n");
        printf ("2 - Sacar dinheiro \n");
        printf ("3 - Consultar saldo \n");
        printf ("4 - Sair \n");
        printf (" Esscolha alguma das opções: \n");
        scanf ("%d", &opcao);
        
        switch (opcao){
        case 1: 
            printf("Digite o valor para depositar: R$");
            scanf ("%f", &valor);
        if (valor > 0) {
            ValorFinal = ValorFinal + valor;
            printf ("Depósito de R$ %.2f realizado com sucesso! \n", valor);
            } else {
                printf("Valor inválido para depósito!\n");
            }
            break;
            
        case 2: 
            printf("Digite o valor para sacar: R$");
            scanf ("%f", &valor);
            if (valor > saldo) {
                printf ("ERRO! Saldo Insuficiente. \n");
            } else if (valor > 0 && valor < saldo) {
                ValorFinal = ValorFinal - valor;
                printf("Saque realizado com sucesso!\n");
            } else { 
                printf("Valor inválido para saque!\n");
            }
            break;
            
        case 3: 
            printf ("Seu saldo atual é: R$%.2lf\n", ValorFinal);
            break;
            
            case 4:
                printf("Saindo do programa...\n");
                break;
                
                default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);
    
    return 0;
}

