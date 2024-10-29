#include <stdio.h>

int main (){

    float bim1, bim2, bim3, bim4, divisao,divisor;

    printf("Digite a nota do primeiro Bimestre: \n");
    scanf ("%f", &bim1);
    printf("Digite a nota do Segundo Bimestre: \n");
    scanf("%f", &bim2);
    printf("Digite a nota do terceiro Bimestre: \n");
    scanf("%f", &bim3);
    printf("Digite a nota do quarto Bimestre: \n");
    scanf("%f", &bim4);
    
    divisao = bim1 + bim2 + bim3 + bim4;
    divisor= divisao/4;
    

printf("O resultado das nota é %.2f\n", divisor);
}