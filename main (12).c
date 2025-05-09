//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main (){
    setlocale (LC_ALL,"");
    float n1, n2, n3, n4, média;
    int opção;
    while (opção != 5){
    printf("Opção 1 = Inglês\n");
    printf ("Opção 2 = Matemática\n");
    printf ("Opção 3 = Geografia\n");
    printf ("Opção 4 = Literatura\n");
    printf ("Opção 5 = Sair\n");
    scanf ("%d", &opção);
    if ( opção == 1 )
    {
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
        média = ((n1+n2+n3+n4) / 4 );
        if (média > 9.0)
        {
            printf ("A média é igual a %.2f, está no conceito A e está aprovado\n", média);
        }
        else if (média > 7.9)
        {
            printf ("A média é igual a %2.f, está no conceito B e está aprovado\n", média);
        }
        else if (média > 6.0)
        {
            printf ("A média é igual a %.2f, está no conceito C e está aprovado\n", média);
        }
        else if (média > 4.0)
        {
            printf ("A média é igual a %.2f, está no conceito D e está Reprovado\n", média);
        }
        else{
            printf ("A média é igual a %2.f, está no conceito E e está Reprovado\n", média);
        }
    }
    else if ( opção == 2 )
    {
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1,&n2,&n3,&n4);
        média = ((n1+n2+n3+n4) / 4);
        if (média > 9.0)
        {
            printf ("A média é igual a %.2f,está no conceito A e está aprovado\n", média);
        }
        else if (média > 7.9)
        {
            printf ("A média é igual a %2.f, está no conceito B e está aprovado\n", média);
        }
        else if (média > 6.0)
        {
            printf ("A média é igual a %.2f, está no conceito C e está aprovado\n", média);
        }
        else if (média > 4.0)
        {
            printf ("A média é igual a %.2f, está no conceito D e está Reprovado\n", média);
        }
        else{
            printf ("A média é igual a %2.f, está no conceito E e está Reprovado\n", média);
        }
    }
    else if ( opção == 3)
    {
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1,&n2,&n3,&n4);
        média = ((n1+n2+n3+n4) / 4);
        if (média > 9.0)
        {
            printf ("A média é igual a %.2f,está no conceito A e está aprovado\n", média);
        }
        else if (média > 7.9)
        {
            printf ("A média é igual a %2.f, está no conceito B e está aprovado\n", média);
        }
        else if (média > 6.0)
        {
            printf ("A média é igual a %.2f, está no conceito C e está aprovado\n", média);
        }
        else if (média > 4.0)
        {
            printf ("A média é igual a %.2f, está no conceito D e está Reprovado\n", média);
        }
        else{
            printf ("A média é igual a %2.f, está no conceito E e está Reprovado\n", média);
        }
    }
    else if ( opção == 4)
    {
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1,&n2,&n3,&n4);
        média = ((n1+n2+n3+n4) / 4);
        if (média > 9.0)
        {
            printf ("A média é igual a %.2f,está no conceito A e está aprovado\n", média);
        }
        else if (média > 7.9)
        {
            printf ("A média é igual a %2.f, está no conceito B e está aprovado\n", média);
        }
        else if (média > 6.0)
        {
            printf ("A média é igual a %.2f, está no conceito C e está aprovado\n", média);
        }
        else if (média > 4.0)
        {
            printf ("A média é igual a %.2f, está no conceito D e está Reprovado\n", média);
        }
        else{
            printf ("A média é igual a %2.f, está no conceito E e está Reprovado\n", média);
        }
    }
    else {
        printf ("Sair");
    }
    }
return 0;
}