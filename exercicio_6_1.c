// 6. Crie um programa que calcule e imprima o valor do fatorial de um 
// número informado pelo usuário, usando recursividade
//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int recursiveFactor(int);

int main()
{
    int a;
    
    printf("Escreva um Numero para fatorar em recursividade:");
    scanf("%d", &a);
    recursiveFactor(a);
    printf("\nO fatorial de %d eh %d" , a, recursiveFactor(a));
    return 0;
}


int recursiveFactor(a){
 
 int res=1;

  if ( a > res){
       
    res = a * recursiveFactor(a-1);
  }
return res; 

};
