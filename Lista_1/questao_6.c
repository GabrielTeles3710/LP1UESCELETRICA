#include <stdio.h>

float Resistencia,Corrente,Tensao;

int main()
{
    
    printf("informe o valor da corrente: ");
    scanf("%f", &Resistencia);
    
    printf("informe o valor da resistencia: ");
    scanf("%f", &Corrente);

    Tensao = Resistencia * Corrente;

    printf("Tensão : %.2f \n\n",Tensao);
    return 0;
}