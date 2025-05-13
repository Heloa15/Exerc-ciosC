#include <stdio.h>

//Definindo a struct Pessoa
struct Pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct Pessoa p1, p2;

    //Leitura da primeira pessoa
    printf("Pessoa 1:\n");
    printf("Nome: ");
    scanf(" %[^\n]", p1.nome);
    printf("Idade: ");
    scanf("%d", &p1.idade);

    //Leitura da segunda pessoa
    printf("\nPessoa 2:\n");
    printf("Nome: ");
    scanf(" %[^\n]", p2.nome);
    printf("Idade: ");
    scanf("%d", &p2.idade);

    // Comparação das idades
    printf("Resultado:\n");
    if(p1.idade > p2.idade) {
        printf("%s é mais velha que %s.\n", p1.nome, p2.nome);
    } else if(p2.idade > p1.idade) {
        printf("%s é mais velha que %s.\n", p2.nome, p1.nome);
    } else {
        printf("%s e %s têm a mesma idade.\n", p1.nome, p2.nome);
    }

    return 0;
}

