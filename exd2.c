/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont;
    float media=0 , totalnotas=0, notas[20];

    for (cont=1; cont<20; cont++) {
        scanf("%f", &notas[cont]);
        totalnotas = totalnotas + notas[cont];
    }

    media = totalnotas/20;
        for(cont = 1; cont<20; cont++){
            if (notas[cont]>=media){
                printf("%.1f ", notas[cont]);
        }
    }

    getch();
}
