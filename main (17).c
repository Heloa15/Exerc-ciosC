#include <locale.h>
#include <stdio.h>

int main () {
    setlocale (LC_ALL,"");
    int opçao, estação;
    printf("Digite o numero para saber a estação do ano(1-4):\n");
    printf("1 - Verão \n");
    printf("2 - Inverno \n");
    printf("3 - Outono \n");
    printf("4 - Primavera \n");
    scanf("%d", &opçao);
    
    switch(opçao){
        case 1: //Verão
        printf("Você escolheu Verão", estação);
        break;
        
        case 2: //Inverno
        printf("Você escolheu Inverno", estação);
        break;
        
        case 3: //Outono
        printf("Você escolheu Outono", estação);
        break;
        
        case 4: //Primavera
        printf("Você escolheu Primavera", estação);
        break;
        
        default: 
        printf("Erro! Opção inválida. Programa encerrado. \n");
        return 1;
    }
    return 0;
}
    