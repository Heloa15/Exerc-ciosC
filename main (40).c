#include <stdio.h>

int main() {
   int numero, maior, menor;
   int i;
   
   //Solicite ao usuário que ele digite os 10 números
   printf("Digite 10 números inteiros: \n");
   
   for (i = 1; i <= 10; i++) {
       printf ("Numero %d: ", i);
       scanf("%d", &numero);
       
       
      if (i == 1){
          //Começa maior e menor com primeiro número
          maior = menor = numero;
      } else {
          if (numero > maior)
             maior = numero;
             if (numero < menor)
                 menor = numero;
      }
   }
   
   printf("O maior número é: %d\n ", maior);
   printf("O menor número é: %d\n", menor);
    return 0;
}