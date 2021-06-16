int main()
{
    char senha[25];
    char caracvog[25];
    int i=0;
    int vogais = 0;
    
    
    scanf("%s", senha);
    
    // quantas vogais foram digitadas?
    while (senha[i]!='\0'){
        if (senha[i] == 'a'||
            senha[i] == 'e' ||
            senha[i] == 'i' ||
            senha[i] == 'o' ||
            senha[i] == 'u') {
                caracvog[vogais] = senha[i];    
                vogais++;
            }
            i++;
        }
    printf("Na senha %s tem %i vogais", senha, vogais);
    for(i=0; i<vogais; i++){
        printf("%c ", caracvog[i]);
    }
}
