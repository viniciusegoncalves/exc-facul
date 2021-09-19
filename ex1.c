
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
