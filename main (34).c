#include <stdio.h>

int main(){
   
  float num1, num2, resultado;
  int operador;
  
  //Menu de operações
  printf("Escolha a operação: \n");
  printf("1 - Adição(+)\n");
  printf("2 - Subtração(-)\n");
  printf("3 - Multiplicação(*)\n");
  printf("4 - Divisão(/)\n");
  
  //Entrada da escolha do usário
  printf("Digite o número da operação (1 - 4):");
  scanf("%d", &operador);
  
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
  
  //Realiza a operação conforme a escolha do usário 
  switch (operador) {
      case 1: 
      resultado = num1 + num2;
      printf("O Resultado: %.2f\n", resultado);
      break;
  
      case 2: 
      resultado = num1 - num2;
      printf("O Resultado: %.2f\n", resultado);
      break;
      
      case 3: 
      resultado = num1 * num2;
      printf("O Resultado: %.2f\n", resultado);
      break;
      
      case 4: // Apenas if/else para divisão caso ela seja feita por zero
      if (num2 != 0){
          resultado = num1 / num2;
          printf("O Resultado: %.2f\n", resultado);
      } else {
          printf("Erro: divisão por zero. \n");
      }
      break;
 default: 
      printf("Operação Inválida. \n");
  }
    return 0;
}