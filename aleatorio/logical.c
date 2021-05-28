
#include <stdio.h>
#include <stdlib.h>


int main(){


float peca_1, peca_2, total;
int  num_1, cod_1, num_2, cod_2;



   printf("entre com valores da peca 1 e 2 ex: 000 1 5.30\n");


scanf("\n %d %d %f", &cod_1, &num_1, &peca_1);
scanf("\n %d %d %f", &cod_2, &num_2, &peca_2);

total = (peca_1 * num_1) + (peca_2 * num_2);  


printf("VALOR A PAGAR %.2f R$" ,total);



    return 0;

}

