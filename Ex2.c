/*Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.

*/
#include <stdio.h>
void main ()
{
  int N, i, soma=0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
      soma = soma + i;
    }
     printf("Soma: %d", soma);
}
