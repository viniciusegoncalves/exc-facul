/******************************************************************************

Uri - 1040 - Media 3 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float notas[4], media, nexam;
    
    scanf("%f" "%f" "%f" "%f", &notas[0], &notas[1], &notas[2], &notas[3]);
    
    media = (notas[0]*2 + notas[1]*3 + notas[2]*4 + notas[3])/10;
    
    printf("Media: %.1f\n", media);
    
    if (media>=7){
        printf("Aluno aprovado.\n");
    }
    if (media<5){
        printf("Aluno reprovado.\n");
    }
    if (media>=5 && media<7){
        printf("Aluno em exame.\n");
        scanf("%f", &nexam);
        printf("Nota do exame: %.1f\n", nexam);
        if (((nexam + media)/2)>=5){
            printf("Aluno aprovado.\n");
        }
            else{
                printf("Aluno reprovado.\n");
            }
        printf("Media final: %.1f\n",(nexam + media)/2);
    }
    
    return 0;
}