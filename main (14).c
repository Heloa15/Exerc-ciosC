#include <locale.h>
#include <stdio.h>

int main () {
    setlocale (LC_ALL,"");
    int num1, num2, resultado, operador;
    printf("Insira o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Insira o segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite o numero da operação desejada(1-4)\n");
    printf("1 - Soma (+)\n");
    printf("2 - Subtração (-)\n");
    printf("3 - Multiplicação (*)\n");
    printf("4 - Divisão (/)\n");
    scanf ("%d", &operador);
        
    switch (operador){
        case 1: //Soma
        printf("Você escolheu Soma (+)\n");
        resultado = num1 + num2;
        printf(" O resultado da soma é: %.2d\n", resultado);
        break;

    case 2: //Subtração
        printf("Você escolheu Subtração (-)\n");
        resultado = num1 - num2;
        printf(" O resultado da Subtração é: %.2d\n", resultado);
        break;
        
     case 3: //Multiplicação
        printf("Você escolheu Multiplicação (*)\n");
        resultado = num1 * num2;
        printf(" O resultado da Multiplicação é: %.2d\n", resultado);
        break;
        
    case 4: //Divisão
        printf("Você escolheu Divisão (/)\n");
        resultado = num1 / num2;
        printf(" O resultado da Divisão é: %.2d\n", resultado);
        break;
        
    default: 
        printf("Opção inválida! Programa encerrado");
        return 1;
        

    }
    return 0;
}