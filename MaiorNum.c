/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

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
