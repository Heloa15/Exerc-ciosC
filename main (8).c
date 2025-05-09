#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
  int L1, L2, L3;
  printf ("Qual é o comprimento dos três lados de um triângulo:\n");
  scanf ("%d %d %d", &L1, &L2, &L3);
  if (L1==L2 && L2==L3)
  {
      printf("Triângulo equilátero");
  }
else if (L1==L2 || L2==L3 || L1==L3)
{
    printf("Triângulo Isóceles");
}
else
{
    printf ("Triângulo Escaleno");
}
return 0;
}