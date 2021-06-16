//3.3.6

int main() {
    int tab;
    int cont=1,varTab;
    
    scanf("%i", &tab);
    
    while (cont<=10) {
        varTab=tab*cont;
        printf("%i x %i = %i\n",tab,cont,varTab);
        cont=cont+1;
    }
    getch();
}