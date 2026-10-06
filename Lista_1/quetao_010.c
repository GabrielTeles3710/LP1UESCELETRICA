//Leia o número de horas trabalhadas em um mês e o valor da hora de trabalho. Calcule e exiba o
//salário bruto, o desconto de 11% e o salário líquido. Exemplo: 160 h a R$ 25,00 → bruto R$
//4000,00; desconto R$ 440,00; líquido R$ 3560,00. Dica: para imprimir o símbolo % dentro do
//printf, escreva %%.

#include <stdio.h>

int H;
float Vh,Sb,Sl;

int main(){

    printf("Informe o numero de horas trabalhadas mensalmente: ");
    scanf("%d",&H);
    printf("\n");

    printf("Informe o valor ganho por hora: ");
    scanf("%f",&Vh);
    printf("\n");

    Sb = H * Vh;
    Sl = Sb * 0.89;

    printf("Seu salario bruto é: %.2f e seu salário liquido após o desconto de 11%% é de: %.2f", Sb,Sl);

}