#include <stdio.h>


//Definindo a struct do aluno
struct Aluno {
    char nome[100];
    int idade;
    float nota;
};


int main() {
 struct Aluno aluno;
 
 //Solicitação dos dados do aluno 
 printf("Cadastro de Aluno\n");
 
 printf("Nome (sem espaço): ");
 scanf(" %[^\n]", aluno.nome); //Lê apenas o primeiro espaço
 
 
 printf("Idade: ");
 scanf("%d", &aluno.idade);
 
 printf("Nota: ");
 scanf("%f", &aluno.nota);
 
 //Saída
 printf("Dados do Aluno: \n");
 printf("Nome: %s\n", aluno.nome);
 printf("Idade: %d\n", aluno.idade);
 printf("Nota: %.2f\n", aluno.nota);
 

    return 0;
}
