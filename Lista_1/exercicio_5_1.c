// 5. Crie um programa para imprimir os números de N a 1 utilizando 
// função recursiva.
//REALIZADO POR GABRIEL PINHEIRO CAMPOS , UNINOVE SANTO AMARO, 03/A NOTURNO: RA 2220102380.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int recursiveFunc(int,int);

int main(void)
{
    int a,i; 
    i=1;
    a=10;
    recursiveFunc(a,i);
    return 0;
}

int recursiveFunc(int a,int i){
 
  if ( i <= a){

      recursiveFunc(a-1,i);
      printf("contanto... %d\n",a);

  }

};
