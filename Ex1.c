/*Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N.

- solicitar N
- fzr um loop
- dentro do loop, fzr um if e printf*/

#include <stdio.h>
void main ()
{
  int N, i;

    printf("Digite um valor inteiro: ");
    scanf("%d", &N);

    for (i=0; i<N; i=i+2) //exibindo os numeros pares inferiores a N
    {
      printf("%d ", i);
    }

    if (N%2==0)
    {
      printf("%d", N);
    }
}
