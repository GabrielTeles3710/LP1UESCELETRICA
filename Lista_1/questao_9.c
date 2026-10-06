#include <stdio.h>

float R1,R2,R3;

int main(){

printf("Informe o valor do resistor 1: ");
scanf("%f", &R1);

printf("Informe o valor do resistor 2: ");
scanf("%f", &R2);

printf("Informe o valor do resistor 3: ");
scanf("%f", &R3);
printf("\n");

float Rs = R1 + R2 + R3;
printf("Resistencia em série:%.2f \n\n",Rs);

float Rp = 1 / (1/R1 + 1/R2 + 1/R3);
printf("Resistencia em paralelo: %.3f \n\n",Rp);
}