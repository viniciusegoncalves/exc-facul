/*
4.2.1Faça um programa que receba 5 valores inteiros em um 
vetor e mostre na tela, os valores na ordem inversa.
*/

#include <stdio.h>

int main() {
    
    int c, valores[5];
    
    for (c=1; c<=5; c++) {
        scanf("%i", &valores[c]);
    }
    
    for (c=5; c>=1; c--) {
        printf(" \n%i", valores[c]);
    }
    
    getch();
}
