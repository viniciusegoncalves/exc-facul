// 3.3.7

#include <stdio.h>

int main(){
    int contador = 1;
    int number;
    int acumulador = 1;
    int resultado = 0;
    
    scanf("%i", &number);
    
    while (contador<=number){
        resultado = resultado + acumulador;
        acumulador = acumulador +2;
        contador = contador + 1;
    }
    
        printf("%i", resultado);
    
    getchar();
}