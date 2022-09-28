/*Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão
Aritmética) com primeiro termo a1 e razão
r.
Pa= ai + r

solicitar o N, ai
-


-;
*/
#include <stdio.h>
void main ()
{
  int N, a1, razao, An, i;

    printf("Digite o valor do N, A1 e da razao, respectivamente: ");
    scanf("%d %d %d", &N, &a1, &razao);

    An= a1 + (N-1) * razao; //formula pa

    for (i=a1; i<=An; i=i+razao)
    {
      printf("%d ", i);
    }

}
