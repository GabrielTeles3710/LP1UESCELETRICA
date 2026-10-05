#include <stdio.h>

int R1,R2;


int main() {
    
    printf("informe o valor do primeiro resistor: ");
    scanf("%d", &R1);
    
    printf("informe o valor do segundo resistor: ");
    scanf("%d", &R2);
    
    printf("\n");

    int R3 = R1 * R2 / (R1 + R2);
    printf("O valor dos resistores em paralelo igual a: %d\n\n",R3);   
    return 0;
}   