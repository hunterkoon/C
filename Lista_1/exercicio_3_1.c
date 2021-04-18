//  Crie um programa que calcule e imprima o valor do fatorial de um
// número informado pelo usuário, usando função
//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.

#include <stdio.h>
#include <stdlib.h>

int fatorialFunc(int);

int main()
{
    int a;
    printf("Escreva um Numero para fatorar X!\n");
    scanf("%d", &a);

    printf("Fatorando...: %d", a);
    fatorialFunc(a);
}

int fatorialFunc(int a)
{
        int b=1;

    for (b; a > 1; a--){

        b = b * a;      

        printf("\n Valor Retornado: \t %d", b);
    };
};
