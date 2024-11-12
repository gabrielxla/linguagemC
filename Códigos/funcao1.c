#include <stdio.h>
#include "calculo.h"
int soma2();

int main () {
    printf ("%d\n", soma2(2,5));
return 0;
}
int soma2(int x,int y){
    return x + y;
}