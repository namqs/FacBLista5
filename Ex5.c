/*Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...

2x2 ... n vezes
- 2*2= i
  i*2=
*/


#include <stdio.h>
#define QUANT 10000
void main ()
{
  int i, N, j=1; //i=contador

    printf("Digite o numero de termos que vc deseja ver: ");
    scanf("%d", &N);

   printf("1 ");
  for (i=0; i<N-1; i++)
  {
    j= j*2;
    printf("%d ", j);
  }
}
