#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
   float n1, n2, n3;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Digite o terceiro número: ");
    scanf("%f", &n3);
    if (n1 == n2 && n2 == n3) {
        printf("Os três números são iguais.\n");
    }
    else if (n1 >= n2 && n1 >= n3) {
        printf("O maior número é: %.2f\n", n1);
    } 
    else if (n2 >= n1 && n2 >= n3) {
        printf("O maior número é: %.2f\n", n2);
    }
    else {
        printf("O maior número é: %.2f\n", n3);
    }
    return 0;
}
