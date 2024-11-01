#include <stdio.h>

int main () {
    int janeiro=1,fevereiro=2,marco=3, abril=4, maio=5, junho=6, julho=7, agosto=8, setembro=9, outubro=10, novembro=11, dezembro=12;
    int outono,verão,inverno,primavera,mes;
    printf ("digite o numero do mês que queira saber\n");
    scanf ("%d",&mes);

    if (mes == janeiro || mes == fevereiro || mes == marco)
    {
    printf("o mês que escolheu vai ser Verão\n");
    }
    else if (mes == abril || mes==maio || mes==junho)
    {   printf ("O mes que voce escolheu vai ser Outono\n");
    }
    if (mes == julho || mes == agosto || mes == setembro)
    {
    printf("o mês que escolheu vai ser Inverno\n");
    }
    if (mes == outono || mes == novembro || mes == dezembro)
    {
    printf("o mês que escolheu vai ser Primavera\n");
    }
    
    
    return 0;
}