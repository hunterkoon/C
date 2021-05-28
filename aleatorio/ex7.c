#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{

    int n, out, in, i, valor;

    printf("entre com a quantidade de testes: ");
    scanf("%d", &n);

         out =0;
        in =0;

    for (i = 0; i < n; i++)
    {

        scanf("%d", &valor);
      

        if (valor < 10 || valor > 20 )
        { // 10 a 20

            out++;
        }
        else if (valor < 0)
        {
           --in;
        } else {

            in++;
        }
    }

    printf("\n%d in", in);
    printf("\n%d out", out);

}
