#include <stdio.h>

int main () {

    int n1;
    int n2;
    int rs;
   
    printf ("Digite um numero: \n");
    scanf ("%d", &n1);
    printf ("Digite outro numero: \n");
    scanf ("%d", &n2);
    rs = n1+n2;
    printf ("O resultado é %d\n", rs);
    return 0;

}