#include <stdio.h>
int main () {
    // Variaveis //
    int num1,num2,somar,subtrair,mutiplicar,dividir,resto;
    
    // Comandos para executar a conta//
    printf ("Digite um numero: \n");
    scanf ("%d", &num1);
    printf ("Digite o segundo numero: \n");
    scanf ("%d", &num2);
    
    //atribuição do valor das variaveis//
    somar = num1 + num2;
    subtrair = num1 - num2;
    mutiplicar = num1 * num2;
    dividir = num1 / num2;
    resto = num1 % num2;

    printf ("A soma entre %d e %d é igual a %d\n", num1,num2,somar );
    printf ("A subtração entre %d e %d é igual a %d\n", num1,num2,subtrair );
    printf ("A divisão entre %d e %d é igual a %d\n", num1,num2,dividir );
    printf ("A mutiplicação entre %d e %d é igual a %d\n", num1,num2,mutiplicar );
    printf ("O resto entre %d e %d é igual a %d\n", num1,num2,resto );


    return 0;
}

