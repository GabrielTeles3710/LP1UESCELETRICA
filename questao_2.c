#include <stdio.h>

float In,I;

int main()
{
    
    printf("informe o valor da corrente nominal: ");
    scanf("%f", &In);
    
    printf("informe o valor da corrente medida do circuito: ");
    scanf("%f", &I);

    //Condição inicial
    if (I <= In) {
        
        printf("Dijuntor Normal \n");    
    
    } 
        //Segunda condição especifica onde a variavel tem que atingir 2 requisitos
        else if(In < I && I <= 1.2 * In) {
            
            printf("Alerta! \n");
        
        } 
            //Terceira condição tambem especifica porem so tem um unico requisito
            else if (I > 1.2 * In) {
                
                printf("Desarme! \n");
            }
        
    return 0;
}
