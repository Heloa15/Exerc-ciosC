#include <stdio.h>

int main(){
   
   int i, soma = 0;
   
   
   for (i = 2; i <= 200; i += 2) {
       soma += i;
   }
   
   //Exibe a soma dos números pares de 1 a 200
   printf("Soma dos números pares de 1 a 200 é: %d\n", soma);
   
   return 0;
}