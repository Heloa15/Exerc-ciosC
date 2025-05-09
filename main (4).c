#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
   int numero, par, impar;
   printf ("Digite um numero inteiro \n");
   scanf("%d", &numero);
   if (numero %2 == 0)
   {
       printf("O numero é par \n");
   }
   else 
   {
    printf ("O numero é impar \n");
   }
   return 0;
}