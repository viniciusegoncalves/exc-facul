/******************************************************************************
Exercício de fixação: Maior número!
*******************************************************************************/
#include <stdio.h>

int main()
{
    int maior, num, cont;
    
    maior = 0;
    
    for (cont=1; cont<=10; cont=cont+1)
    {
        scanf("%i",&num);
        if (num > maior)
          maior=num;
    }
    
    printf("/n O maior número é: %i", maior);
    return 0;
}
