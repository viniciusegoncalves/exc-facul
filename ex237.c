// 2.3.7

#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    printf("peso: ");
    scanf("%f", &peso);
    printf("altura: ");
    scanf("%f", &altura);
    
    imc=peso/(altura*altura);
    
    if (imc<20) {
        printf("Abaixo do peso");
    }
    
    if (imc>=20 && imc<25) {
        printf("Peso normal");
    }
    
    if (imc>=25 && imc<=35) {
        printf("Acima do peso");
    }
    
    if (imc>35) {
        printf("obeso");
    }
    
    
    
    printf("\nimc= %f", imc);
    
    getch();
    
}
