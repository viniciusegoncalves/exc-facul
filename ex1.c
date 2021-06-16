/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade; // declaracao de variavel
    char nome [30]; //declaracao caracteres e quantidade caracteres
    
    printf("digite seu nome");
    scanf("%s", nome); // le informacao do usuario
    printf("digite sua idade");
    scanf("%i", &idade); // le informacao do usuario
    
    printf("%s tem %i anos", nome, idade);
    
    getch(); // para de executar o programa
}
