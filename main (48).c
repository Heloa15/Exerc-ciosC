#include <stdio.h>

struct Aluno {
    char nome[100];
    float mediaFinal;
};

int main() {
    struct Aluno alunos[5];
    float soma = 0.0, mediaGeral;
    int i;

    //Leitura dos dados dos 5 alunos
    for(i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Média final: ");
        scanf("%f", &alunos[i].mediaFinal);

        soma += alunos[i].mediaFinal;

        printf("\n");
    }

    // Cálculo da média geral da turma
    mediaGeral = soma / 5;

    // Exibição do resultado da turma
    printf("Média geral da turma: %.2f\n", mediaGeral);

    return 0;
}
