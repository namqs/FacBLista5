/*Fazer um programa que auxilie o orgão
regulador no cálculo do total de recursos
arrecadados com a aplicação de multas de
trânsito.
O programa deve ler as seguintes
informações para cada motorista:
- O número da carteira de motorista;
- Número de multas;
- Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas.

- se o

*/

#define QUANT 3
#include <stdio.h>
void main ()
{
  int NumCart, NumMultas, i=1, j, maior= 0, MaiorCnh;
  float ValorMultas, soma=0, divida=0, dividausuario, totalValue;

   for (;i<=QUANT; i++)
   {
    dividausuario = 0;
    printf("\n\nNumero da carteira do %dº motorista: ", i);
    scanf("%d", &NumCart);
    printf("total de multas do %dº motorista: ", i);
    scanf("%d", &NumMultas);

      for(j=1; j<=NumMultas; j++)
      {
        printf("Digite o valor da sua %dº multa: ", j);
        scanf("%f", &ValorMultas);

        divida = divida + ValorMultas;
        dividausuario = dividausuario + ValorMultas;
      }
      printf("O valor total da conta do motorista %d eh: R$ %.2f", i, dividausuario);
      totalValue = dividausuario + totalValue;
      printf("\nTotal parcial: %f", totalValue);
     // soma = soma + divida;

      if (NumMultas > maior)
      {
        maior = NumMultas;
        NumMultas = 0;
        MaiorCnh = NumCart;
      }
   }
   printf("\n Conta geral: %.2f", totalValue);
   printf("\n O maior = %d", maior);
   printf("\n O carro com maior numero de multas eh: %d", MaiorCnh);
}
