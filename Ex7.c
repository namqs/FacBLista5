/*Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.
- loop pra repetir o char ate N
- mult. dos numeros impares
- soma dos nrs pares*/


#include <stdio.h>
#include <ctype.h>

void main ()
{
  int mult=1, soma=0, num;
  char opcao;

     do
     {
       printf("Digite um valor inteiro e positivo: ");
          scanf("%d", &num);

          if (num%2==0)
          {
          soma = soma + num;
          }
          else
          {
            mult = mult * num;
          }
          printf("Deseja digitar mais um? [S/N]: ");
          fflush(stdin);
          scanf("%c", &opcao);
          opcao = toupper (opcao);
     } while (opcao!='N');

     printf("Soma dos pares = %d ", soma);
     printf("\nMultiplicacao dos impares = %d", mult);

}
