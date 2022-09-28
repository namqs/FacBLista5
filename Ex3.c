/*Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário.*/

#include <stdio.h>
void main ()
{
  int N, i;

    printf("Digite um valor inteiro: ");
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
      if (N%i==0)
      {
        printf("%d ", i);
      }
    }
}
