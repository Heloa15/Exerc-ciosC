#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale  (LC_ALL, "");
    int opcao;
    float valor, resultado;
    
    do {
        //Exibe o Menu
    printf ("Opções de conversão: \n");
    printf("1 - Converta Quilômetros para Milhas");
    printf ("2 - Converta Celsius para Fahrenheit");
    printf ("3 - Converta Quilogramas para Libras");
    printf ("4 - Metros para Centímetros");
    printf ("5 - Sair ");
    
    switch (opcao){
        case 1:    
        printf("Digite o número em Quilômetros:\n");
        scanf ("%f", &valor);
        resultado =  valor * 0.62137;
        printf (" %.2f Quilômetros é igual a %.2f Milhas. \n", valor, resultado);
        break;
        
        case 2: 
        printf ("Digite o número em Celsius: \n");
        scanf ("%f", &valor);
        resultado = valor * 1,8 + 32;
        printf ("%.2f Celsius é igual a %.2f Fahrenheit. \n ", valor, resultado);
        break;
        
        case 3: 
        printf ("Digite o número em Quilogramas: \n");
        scanf ("%f", &valor);
        resultado = valor * 2,046;
        printf ("%.2f Quilogramas é igual a %.2f Libras. \n", valor, resultado);
        break;
        
        case 4: 
        printf ("Digite o número em metros: \n");
        scanf ("%f", &valor);
        resultado = valor / 100;
        printf("%.2f Metros é igual a %.2f Centímetros. \n", valor, resultado);
        break;
        
        case 5: 
        printf("Saindo...\n");
        break;
        
        default: 
        printf("ERRO! Opção Inválida! Tente Novamente. \n");
 }
     }while (opcao != 5);
    return 0;
}