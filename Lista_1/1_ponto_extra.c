#include <stdio.h>

int codigo,centena,dezena,unidade;

int main(){

    printf("Informe o codigo: ");
    scanf("%d",&codigo);
    printf("\n");

    centena = codigo / 100;
    dezena = (codigo % 100) /10;
    unidade = codigo % 10;

    if (codigo / 100 >= 5 || codigo < 100)
    {
        printf("Codigo maior do que 3 digitos.");
    }   else if(unidade > 5){
            printf("Ultimo digito inválido.");
    }       else  {
                double resistencia = (centena * 10 + dezena) * pow(10,unidade);
                printf("resistencia em omn: %.0f",resistencia);   
        }
    

}