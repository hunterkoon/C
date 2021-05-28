// 2. Escreva uma função recursiva que calcule o número de grupos 
// distintos com k pessoas que podem ser formados a partir de um 
// conjunto de n pessoas. A definição abaixo da função Comb(n,k) 
// define as regras:
//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.

#include <stdio.h>

int comb(long unsigned int n, long unsigned int k)
{

    if (k == 1)
    {

        return (n);
    }
    else
    {
        if (k == n)
        {
            return (1);
        }
         else
        {

return ((comb(n-1,k-1)) + (comb(n-1,k)));
        
        }
    }
}

int main()
{

     long unsigned int nValue, kValue, x;
    printf("\nentre com valor de conjunto de pessoas N = ");
    scanf("%lu", &nValue);
    printf("\nentre com valor de grupos distintos K = ");
    scanf("%lu", &kValue);

    x = comb(nValue, kValue);

    printf("\n resultou em: %lu possibilidades", x);

    return (0);
}