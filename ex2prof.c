/*
2. Faça um programa que carregue uma matriz 3x3 e mostre-a na tela
em forma de matriz.
*/

#include <stdio.h>

int main(){
    
    int linha, coluna;
    int mat[3][3];
    
    for (linha = 0; linha<3; linha++){
        for (coluna=0; coluna<3; coluna ++){
            scanf("%i", &mat[linha][coluna]);
        }
    }
    
    for (linha = 0; linha<3; linha++){
        for (coluna=0; coluna<3; coluna ++){
            printf("%i", mat[linha][coluna]);
        }
    printf("\n");
    }
    getch();
}
