#include <stdio.h>

int main () {
    int valor [] = {32,3,13,43,54,5};
    int *pvalor = valor;
    printf ("%d,%p",*pvalor,pvalor);
    pvalor ++;
    printf ("\n%p com valor %d\n",pvalor,*pvalor);
    return 0;
}