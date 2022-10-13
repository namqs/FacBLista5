/*Escrever um programa que encontre o
quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.

- cont, numero.
- numero >1000 && numero % 11 == 5
    */
#include <stdio.h>
void main ()
{
  int cont=0, numero=1000;

    while (cont != 5)
    {
      numero++;

        if (numero%11==5)
        {
          cont++;
        }
    }
    printf("%d", numero);
}
