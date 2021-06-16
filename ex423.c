/*
4.2.3 Faça um programa que receba, em um vetor, 200 valores 
inteiros, a partir do usuário. Após o carregamento, mostre para o 
usuário apenas o conteúdo dos índices pares.
*/

#include <stdio.h>

int main() {
    
    int c, valores [10];
    
    for (c=1; c<=10; c++){
        scanf("%i", &valores[c]);
    }
    for (c=1; c<=10; c++){
        if (valores[c]%2 == 0){
    printf("%i ", valores[c]);
    }}
    
    getch();
}
