#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale  (LC_ALL, "");
    int opcao;
    float num1 , num2, resultado; 
    
    do {
        //Exibe o Menu
        printf("\n------Calculadora Simples------\n");
        printf ("1 - Adição\n");
        printf ("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf ("4 - Divisão\n");
        printf("0 - Sair\n");
        printf (" Escolha uma opção: ");
        scanf ("%d", &opcao);
        
        switch(opcao) {
        case 1: 
            printf ("Digite dois números: ");
            scanf ("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf ("Resultado: %.2f\n", resultado);
            break;
        case 2: 
            printf ("Digite dois números: ");
            scanf ("%f %f", &num1, &num2);
            resultado = num1 - num2;
            printf ("Resultado: %.2f\n", resultado);
            break;
        case 3: 
            printf ("Digite dois números: ");
            scanf ("%f %f", &num1, &num2);
            resultado = num1 * num2;
            printf ("Resultado: %.2f\n", resultado);
            break;
        case 4: 
            printf ("Digite dois números: ");
            scanf ("%f %f", &num1, &num2);
            if (num2 !=0){
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else { 
                printf (" Erro: Divisão por zero!\n");
                
            }
            break;
            case 0:
            printf ("Saindo...\n");
            break;
            default:
            printf("Opção Inválida! Tente Novamente.\n");
                
        }
    }while (opcao!=0);
    return 0;
}