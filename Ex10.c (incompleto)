/*Foi feita uma pesquisa entre os habitantes
de uma região e coletados os dados de
altura e gênero das pessoas. Faça um
programa que leia as informações de 50
pessoas e informe:
- a maior e a menor alturas
encontradas;
- a média de altura das mulheres;
- a média de altura da população;
- o percentual de homens na
população.
*/


#include <stdio.h>
#define QUANT 3
void main ()
{
  int i;
  char gender;
  float alt, MaiorAlt, MenorAlt, MediaMulheres, MediaPop, PercentualHomens, somaMu=0, somaHo=0;

    for(i=1;i<=QUANT;i++)
    {
      printf("Informe genero da %iº pessoa: [F/M] ", i);
      fflush (stdin);
      gender = toupper (gender);
      scanf(" %c", &gender); //o espaco corrige o bug do linux
      printf("Ok, e agora sua altura: ");
      scanf("%f", &alt);

      if (gender=='F') //somando altura das mulheres pra poder calcular a MediaMulheres
      {
        somaMu = somaMu+alt;
      }
      else
      {
       somaHo = somaHo+alt;
      }
    }
  //contas:
    MediaPop = (somaMu + somaHo) / i;

    printf("A maior altura encontrada foi: %.2f", MaiorAlt);
    printf("\nA menor altura encontrada foi: %.2f", MenorAlt);
    printf("\nA media de altura das mulheres eh: %.f", MediaMulheres);
    printf("\nA media de altura da populacao eh: %.2f", MediaPop);
    printf("\nO percentual de homens na pop eh: %.f", PercentualHomens);
}
