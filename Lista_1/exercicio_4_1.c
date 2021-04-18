// 4. Crie um programa para imprimir os números de 1 a N, onde N é um
// número fornecido pelo usuário, utilizando o conceito de
// recursividade.
//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int recursiveFunc(int,int);

int main(void)
{
    int a,i; 
    i=0;
    printf("Escreva um Numero para contar em recursividade:");
    scanf("%d", &a);

    recursiveFunc(a,i);
    return 0;
}

int recursiveFunc(int a,int i){
 
  if ( a > i){

      printf("contanto... %d\n",++i);
      recursiveFunc(a,i);

  }

};
