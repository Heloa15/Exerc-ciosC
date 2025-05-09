//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,""); 
    int caminhao, alq, viagens;
    printf ("Quantos caminhoes possui:\n");
    scanf ("%d", &caminhao);
    printf ("Quantos alqueires possui:\n");
    scanf ("%d", &alq);
    //Processamento
    viagens = (alq * 250) / (caminhao * 18);
    printf ("A quantidade de viagens necessárias é:%d", viagens);
    return 0;
}