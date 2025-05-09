#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
   int numero, positivo, negativo, zero;
   printf ("Digite o numero:\n");
   scanf ("%d", &numero);
   if (numero > 0)
   {
       printf ("O numero é positivo \n");
   }
   else if (numero < 0)
    {
        printf(" O numero é negativo \n");
    }
    else 
    {
        printf ("O numero é zero \n");
    }
    return 0;
}