#include <locale.h>
#include <stdio.h>

int main(){
     int opcao, quantidade, i;
     float preco, total = 0.0;
     char continuar;
     
     
     do {
     printf("Bem-vindo a Informática SENAI: ");
     printf("1 - Teclado - R$ 100.00\n");
     printf("2 - Mouse - R$ 50.00\n");
     printf("3 - Monitor - R$ 800.00\n");
     printf("4 - Placa de Vídeo - R$ 2000.00\n");
     printf ("5 - Sair\n");
     printf ("Escolha um produto (1-5): \n");
     scanf ("%d", &opcao);
     
     if (opcao ==5){
         break;
     }
     printf ("Quantas unidades deseja comprar?");
     scanf("%d", &quantidade);
     
     switch(opcao) {
         case 1: 
         preco = 100.00;
         break;
         case 2:
         preco = 50.00;
         break;
         case 3: 
         preco = 800.00;
         break;
         case 4: 
         preco = 2000.00;
         break;
         default:
         printf("Opção Inválida!\n");
         continue;
     }
     float subtotal = 0;
     for (i = 0;i<quantidade; i++){
         subtotal += preco;
     }
     total += subtotal;
     printf ("Item adicionado ao carrinho! Total parcial: R$ %.2f\n", total);
     
     printf("\nDeseja comprar mais produtos(s/n):");
     scanf(" %c", &continuar);
     
     }while (continuar == 's' || continuar == 'S');
     
     printf("\n---------Resumo da compra--------\n");
     printf("Total da compra: R$ %.2f\n", total);
     printf("Obrigada por comprar na Loja Informática SENAI! \n");
     
     return 0;
}    
     
     
    