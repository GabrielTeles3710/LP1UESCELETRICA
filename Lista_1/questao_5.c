#include <stdio.h>

int main(void) {
 
float tensao, corrente,potencia;  //Faltava ; e definir potencia
 
printf("Digite tensao e corrente: "); //podeia ter um \n para nao ficar um dado numa linha 
//e o outro em outra ou separar o print e o scan em dois tambem servia nao é um erro é so estetica msm

scanf("%f %f", &tensao, &corrente); // faltava o & para definir o ponteiro de tensão 
 
potencia = tensao * corrente; //Não estava definido nem globalmente nem no escopo da função
 
printf("Potencia: %.2f W\n", potencia); //Sem ; no final dnv
 
return 0;
}