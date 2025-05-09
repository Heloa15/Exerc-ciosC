#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    float valorCompra, valorFinal, desconto;
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);
    if (valorCompra > 500) {
        desconto = valorCompra * 0.10; 
    } else if (valorCompra >= 200 && valorCompra <= 500) {
        desconto = valorCompra * 0.05; 
        desconto = 0; 
    }
    valorFinal = valorCompra - desconto;
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final após desconto: R$ %.2f\n", valorFinal);
    return 0;
}
  