#include <stdio.h>

int main(){
   
   int numero, i;
   
   //Solicita o número ao usuário 
   printf("Digite um número para ver a tabuada: ");
   scanf("%d", &numero);
   
   //Exibe a tabuada de 1 a 10
   for (i = 1; i<= 10; i++){
       printf("%d * %d = %d\n", numero, i, numero * i);
   }
   
   return 0;
}