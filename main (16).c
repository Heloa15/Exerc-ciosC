#include <locale.h>
#include <stdio.h>

int main () {
    setlocale (LC_ALL,"");
    int opçao;
    float valorReal, valorConvertido;
    printf("Digite o valor em R$:\n");
    scanf("%f", &valorReal);
    
    printf("Digite o numero correspondente a moeda de conversão desejada (1-3):\n");
    printf("1 - Dólar (US$)\n");
    printf("2 - Euro (€$)\n");
    printf("3 - Libra (£$)\n");
    scanf("%d", &opçao);
    
    switch(opçao){
        case 1: //Dólar
        valorConvertido = valorReal * 6.0;
        printf("O valor convertido é de: %.2f\n", valorConvertido);
        break;
        
        case 2: //Euro
        valorConvertido = valorReal * 6.50;
        printf("O valor convertido é de: %.2f\n", valorConvertido);
        break;
        
        case 3: //Libra
        valorConvertido = valorReal * 8.0;
        printf("O valor convertido é de: %.2f\n", valorConvertido);
        break;
        
        default: 
        printf("Erro! Opção inválida. Programa encerrado. \n");
        return 1;
    }
    return 0;
}
    