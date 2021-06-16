/*-----------------------------------------------------------------
1.7.6 Os funcionários da empresa “ToadaGoo”, recebem para
cada hora extra, 50% a mais do valor da hora normal. Faça um
programa que receba o nome de um funcionário, quantas horas
normais e quantas horas extras ele trabalhou, assim como o valor
da hora normal. Mostre, no final do programa, o salario líquido
deste funcionário
-----------------------------------------------------------------*/

int main() {
    
    char nomeFunc[30];
    float totSal, qtdHn, qtdHe, valHn, totHn, totHe;
    
    printf("Nome: ");
    scanf("%s", nomeFunc);
    printf("qtd Horas Normais: ");
    scanf("%f", &qtdHn);
    printf("qtd Horas Extras: ");
    scanf("%f", &qtdHe);
    printf("Valor HOras Normais: ");
    scanf("%f", &valHn);
    
    totHn=qtdHn*valHn;
    totHe=qtdHe*(valHn*1.5);
    totSal=totHn+totHe;
    
    printf("Salario Liquido = %.2f", totSal);
    getch();
}