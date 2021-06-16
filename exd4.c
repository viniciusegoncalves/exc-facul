
#include <stdio.h>

int main()
{
    int cont, vet1[10], vet2[10];
    
    
    for (cont = 0; cont<10; cont++) {
    scanf ("%i", &vet1[cont]);
        if (vet1[cont]%2==0) {
            vet2[cont] = vet1[cont] +1;
        }
        else {
            vet2[cont] = vet1[cont] -1;
        }
        
    }
    
    
    for (cont = 0; cont<10; cont++) {
        printf("%i ", vet1[cont]);
    }
    
    printf("\n");
        
    for (cont = 0; cont<10; cont++) {
        printf("%i ", vet2[cont]);
    }   
    
    getch();
}
