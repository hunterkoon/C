#include <stdio.h>
#include <conio.h>
#include <math.h>

int senhafunc(int a)
{

    if (a != 2002)
    {

        printf("\nSenha Incorreta");
        main();
    }
    else
    {

        printf("acesso Permitido");
    }
}

int main(void)
{

    int senha;

    printf("\nentre com a senha: ");
    scanf("%d", &senha);

    senhafunc(senha);
}
