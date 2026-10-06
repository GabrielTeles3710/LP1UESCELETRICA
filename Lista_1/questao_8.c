#include <stdio.h>

float Nt1,Nt2,Nt3;

int main()
{
    
    printf("Informe a primeira nota: ");
    scanf("%f", &Nt1);

    printf("a segunda: ");
    scanf("%f", &Nt2);
    
    printf("agora a terceira: ");
    scanf("%f", &Nt3);

    float mediaP = (Nt1 * 2 + Nt2 * 3 + Nt3 * 5) / (2 + 3 + 5);

    printf("Sua média é: %.1f",mediaP);

}