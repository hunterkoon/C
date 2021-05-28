#include <stdio.h>
#include <conio.h>


int main(void){



  int codigo, unidades;
  float preco, total;

  
  printf ("Digite o codigo e quantidade do item: ");
  scanf("%d %d", &codigo, &unidades);
  
  switch ( codigo )
  {
    case 1 :
    preco = 4.00;
    break;

    case 2 :
    preco = 4.50;
    break;

    case 3 :
    preco = 5.00;
    break;

    case 4 :
    preco = 2.00;
    break;

    case 5 :
    preco = 1.50;
    break;

    default :
    printf ("codigo invalido!\n");
  }
  
total = (unidades*preco);
printf("Total: R$ %.2f", total);


  getch();
  return 0;
}

