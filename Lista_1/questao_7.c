#include <stdio.h>

float C,F,K;

int main()
{
    
    printf("Informe a temperatura em C°: ");
    scanf("%f", &C);
    
    F = C * 9/5 + 32;
    K = C + 273.15 ;

    printf("Temperatura convertida em Fahrenheit: %.2f \n\n temperatura convertida em Kelvin: %.2f",F,K);
    return 0;
}