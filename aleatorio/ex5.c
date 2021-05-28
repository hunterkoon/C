#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{

    float a, b, c, delta, root1, root2;

    printf("entre com o valor de a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    b = b - (b * 2);

    if (a != 0){

        delta = (b * b) - (4 * a * c);

        if (delta < 0){

            printf("não tem raiz real");
        }
        else if (delta == 0){

            root1 = (-b) / (2 * a);
            printf("apenas uma raiz real: %f", root1);
        }
        else{

            root1 = (-b - sqrt(delta)) / (2 * a);
            root2 = (-b + sqrt(delta)) / (2 * a);

            printf("raiz 1: %f", root1);
            printf("raiz 2: %f", root2);
        }
    } else{

            printf("a=0, nao eh uma equacao de segundo grau");

    }
}
