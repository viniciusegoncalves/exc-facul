/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vogais[5] = {0, 0, 0, 0, 0}, cont;
    char  letra;


    while(letra!='z'){

        scanf("%c", &letra);

        if (letra == 'a'){
            vogais[0] = vogais[0] + 1;
        }
        if (letra == 'e'){
            vogais[1] = vogais[1] + 1;
        }
        if (letra == 'i') {
            vogais[2] = vogais[2] + 1;
        }
        if (letra == 'o'){
            vogais[3] = vogais[3] + 1;
        }
        if (letra == 'u') {
            vogais[4] = vogais[4] + 1;
        }
     }

     for (cont=0; cont<5; cont++){
        printf("%i ", vogais[cont]);
     }

    getch();
}
