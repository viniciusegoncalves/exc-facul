/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char func[30];
    float salario, grat, salTotal;
    
    printf("Nome do funcionário.:");
    scanf("%s", func);
    printf("Salario:");
    scanf("%f", &salario);
    printf("Gratificacao:");
    scanf("%f", &grat);
    
    salTotal=salario+grat;
    
    printf("%s ganha %.2f", func, salTotal);
    getch();
}
