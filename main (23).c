#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale  (LC_ALL, "");
    int numero;
    
    do {
    printf("Digite um número: \n");
    scanf ("%d", &numero);
    
    if(numero != 7){
        printf ("Número incorreto, tente novamente! \n");
        
    }
    else{
        printf("Parabéns! Você digitou o número correto. \n");
    }
    }while (numero != 7);
    return 0;
        
}