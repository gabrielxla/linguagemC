#include <stdio.h>

int main () {

    int numero;
    
    printf ("Digite o numero para saber se é par \n");
    scanf ("%d",&numero);

    if (numero%2 ==0) {
        printf ("O valor %d e Par \n",numero);
    } else {
        printf ("O numero %d é Impar\n", numero);

    }
    
return 0;}