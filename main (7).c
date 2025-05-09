#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
  int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 16) 
    {
        printf("Você não pode votar.\n");
    } 
    else if ((idade >= 16 && idade <= 17) || idade >= 70) 
    {
        printf("O voto é opcional.\n");
    } else if (idade >= 18 && idade <= 69) 
    {
        printf("O voto é obrigatório.\n");
    }

    return 0;
}

