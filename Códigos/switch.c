#include <stdio.h>

int main () {
    int mes;
    printf ("digite o numero do mês que queira saber\n");
    scanf ("%d",&mes);
    
    switch (mes)
    {
    case 1:
    printf ("janeiro\n");
        break;
    case 2 :
    printf ("Fevereiro");
        break;
        default:
    printf ("Este mes nao existe!");
        break;
    }
}