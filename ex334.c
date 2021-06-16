//3.3.4

int main(){
    int idade, somaid=0;
    int cont=1;
    
    while(cont<=5) {
        scanf("%i", &idade);
        somaid=somaid+idade;  //acumulador
        cont=cont+1;          //contado
    }
    printf("soma das idades = %i", somaid);
    getch();
}