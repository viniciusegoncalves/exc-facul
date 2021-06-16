/*
4.2.2Faça um programa que receba as notas de 10 alunos de uma
classe em um vetor e mostre a média das notas.
*/

#include <stdio.h>

int main() {
    
    int c, notas[10]; 
    float somaNotas, media;
    
    for (c=1; c<=10; c++) {
        scanf("%i", &notas[c]);
        somaNotas = notas [c] + somaNotas;
    }
    
    media = somaNotas / 10;
    
    printf("%.1f", media);
    
    getch();
}
