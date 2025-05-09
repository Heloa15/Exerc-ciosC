#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale  (LC_ALL, "");
     char nome[50], sobrenome[50], email[50], telefone[20];
    int opcao, tipo_quarto, dias_hospedado;
    float diaria, total;
    printf("Bem-vindo ao Hotel Senai!\n");
    printf("Escolha uma opção:\n");
    printf("1 - Fazer Check-in\n");
    printf("2 - Chamar Serviço de Quarto\n");
    printf("3 - Fazer Pedido de Comida\n");
    printf ("4 - Sair");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: //Check-in do usuário
            printf("Check-in do Usuário\n");
            printf("Digite seu nome: ");
            scanf("%s", nome);
            printf("Digite seu sobrenome: ");
            scanf("%s", sobrenome);
            printf("Digite seu email: ");
            scanf("%s", email);
            printf("Digite seu telefone: ");
            scanf("%s", telefone);
            
            printf("Escolha o tipo de quarto:\n");
            printf("1 - Quarto Básico - R$ 150,00 \n");
            printf("2 - Quarto Luxo - R$ 500,00\n");
            printf("3 - Suíte Master - R$ 1100,00\n");
            printf("Opção: ");
            scanf("%d", &tipo_quarto);
            
            switch (tipo_quarto) {
                case 1: //Quarto Básico
                    diaria = 150.00;
                    break;
                case 2://Quarto Luxo
                    diaria = 500.00;
                    break;
                case 3:// Suíte Master
                    diaria = 1100.00;
                    break;
            }
            
            printf("Digite quantos dias irá se hospedar: ");
            scanf("%d", &dias_hospedado);
            
            total = diaria * dias_hospedado;
            
            printf("Check-in realizado com sucesso!\n");
            printf("Nome: %s %s\n", nome, sobrenome);
            printf("Email: %s\n", email);
            printf("Telefone: %s\n", telefone);
            printf("Valor da diária: R$%.2f\n", diaria);
            printf("Total a pagar pela hospedagem: R$%.2f\n", total);
            break;
        
        case 2: //Serviço de Quarto
            printf("Serviço de Quarto\n");
            printf("Digite 1 para Limpeza ou 2 para Produto Faltante: ");
            int servico;
            scanf("%d", &servico);
            (servico == 1); 
            {
                printf("Serviço de Limpeza solicitado com sucesso!\n");
            }
            (servico == 2); 
            {
                printf("Informe o produto faltante: ");
                char produto[50];
                scanf("%s", produto);
                printf("Solicitação para %s realizada com sucesso!\n", produto);
                break;
            } 
    {
        
        case 3: //Pedido de Comida
            printf("Pedido de Comida\n");
            printf("Digite o nome do prato desejado: ");
            char comida[50];
            scanf("%s", comida);
            printf("Seu pedido foi realizado com sucesso!\n");
            printf("Hotel Senai agradeçe sua estadia!\n");
            break;
            
            case 4: // Sair
            printf ("Saindo... \n");
            break;
            
            default:
            printf("ERRO! Opção inválida\n");
            
    }while (opcao != 4);
}    
return 0;
} 