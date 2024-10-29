#include <stdio.h>

int main (){

    float n1,n2,soma,divisao;
    printf ("Digite um numero e tecle enter: \n");
    scanf ("%f", &n1);
    printf ("Digite outro numero e tecle enter: \n");
    scanf ("%f", &n2);

    soma = n1 + n2;
    divisao = n1 / n2;

    printf ("O resultado da soma é %.2f \n", soma);
    printf ("O resultado da divisao é %.2f \n", divisao);

return 0;
}
