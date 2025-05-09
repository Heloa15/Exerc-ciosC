#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;
    
    
int main () {
    Aluno aluno[3];
    int i, opcao;
    
    for (int i = 0; i < 3; i++) {
        printf("Informe seu nome: ");
        scanf(" %[^\n]", aluno[i].nome);
        
        printf("Informe seu numero de matrícula: ");
        scanf("%d", &aluno[i].matricula);
        
        printf("Informe sua média: ");
        scanf("%f", &aluno[i].media);
    }
   
   
   do {
   printf("---MENU---");
   printf("1 - Listar todos os alunos");
   printf("2 - Mostrar aluno com maior média");
   printf("3 - Buscar aluno por matrícula");
   printf("4 - Sair");
   scanf("%d", &opcao);
  
        switch (opcao) {
            case 1:
                printf("\n--- Lista de Alunos ---\n");
                for (i = 0; i < 3; i++) {
                    printf("Nome: %s | Matrícula: %d | Média: %.2f\n",
                           aluno[i].nome, aluno[i].matricula, aluno[i].media);
                }
                break;

            case 2: {
                int matricula = 0;
                for (i = 1; i < 3; i++) {
                    if (aluno[i].media > aluno[matricula].media)
                        matricula = i;
                }
                printf("Aluno com maior média: %s (%.2f)\n",
                       aluno[matricula].nome, aluno[matricula].media);
                break;
            }

            case 3: {
                int matricula, encontrado = 0;
                printf("Digite a matrícula para busca: ");
                scanf("%d", &matricula);
                for (i = 0; i < 3; i++) {
                    if (aluno[i].matricula == matricula) {
                        printf("Aluno encontrado: %s | Média: %.2f\n",
                               aluno[i].nome, aluno[i].media);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado)
                    printf("Aluno não encontrado.\n");
                break;
            }

            case 4:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
   