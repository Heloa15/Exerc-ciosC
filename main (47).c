#include <stdio.h>


struct Aluno {
    char nome[100];
    float nota1, nota2, nota3;
};

int main() {
    struct Aluno aluno;
    float media;

    //Leitura dos dados do aluno
    printf("Boletim do Aluno\n");

    printf("Nome: ");
    scanf(" %[^\n]", aluno.nome);

    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);

    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);

    printf("Nota 3: ");
    scanf("%f", &aluno.nota3);

    // Cálculo da média do aluno
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

    // Exibição do resultado
    printf("\nAluno: %s\n", aluno.nome);
    printf("Média: %.2f\n", media);

    if(media >= 7.0) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}