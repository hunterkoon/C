//. Crie um programa para imprimir os números de 1 a 10 utilizando 
//função.
//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.


#include <stdio.h>
#include <stdlib.h>

int retornaNumber(int);

int main()
{

    int num = 1;
    int ret;

    retornaNumber(num);
}

int retornaNumber(int num)
{

    for (num; num != 11; num++)
    {
        printf("\n Valor Retornado: \t %d ", num);
    }
};
