/******************************************************************************

uri 1172

*******************************************************************************/
#include <stdio.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int cont, X[10];
     
    for (cont=0; cont<10; cont++){
         scanf("%i", &X[cont]);
    }
    
    for (cont=0; cont<10; cont++){
        if (X[cont]<=0){
            X[cont] = 1;
        }
        
    }
    
    for (cont=0; cont<10; cont++){
        printf("%i", X[cont]);
        
    }
    
    getch();
    
}
    