//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,""); 
    int empates, vitorias,pontos;
    char nome[50];
    printf("Informe o nome do time:\n");
    scanf("%s", nome);
    printf("Insira a quantidade de vitorias do time:\n");
    scanf("%d", &vitorias);
    printf("Insira a quantidade de empates do time:\n");
    scanf("%d",&empates);
    //Processamento
    pontos = (vitorias * 3) + empates;
    printf("%s total de pontos do time é %d pontos",nome, pontos);
    return 0;
}