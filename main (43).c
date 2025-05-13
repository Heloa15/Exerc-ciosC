#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    //Leitura dos 5 valores
    printf("Digite 5 números inteiros:\n");
    for(i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Impressão invertida dos valores
    printf("Vetor invertido:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
