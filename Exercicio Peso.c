#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    int peso, altura, imc;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu imc é: %.2f", imc);
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificação: Peso normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Obesidade\n");
    }
    return 0;
}
