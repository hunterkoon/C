

// screva um programa usando recursividade dupla para gerar
// valores da função de Ackermann, a qual é definida para valores
// inteiros e não negativos m e n da seguinte forma:

//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.


#include <stdio.h>

unsigned long int ackermannFunc(unsigned long int m, unsigned long int n)
{

    if (m == 0)
    {
        return (n + 1);
    }
    else
    {
        if (n == 0)
        {
            return (ackermannFunc(m - 1, 1));
        }
        else
        {
            return (ackermannFunc(m - 1, ackermannFunc(m, n - 1)));
        }
    }
}

int main()
{

    unsigned long int mValue, nValue, x;
    printf("\nentre com valor de M = ");
    scanf("%lu", &mValue);
    printf("\nentre com valor de N = ");
    scanf("%lu", &nValue);

    x = ackermannFunc(mValue, nValue);
    printf("\nAckermann resultou em: %lu", x);

    return (0);
}