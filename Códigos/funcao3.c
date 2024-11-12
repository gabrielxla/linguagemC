#include <stdio.h>
#include "../lib/calculo.h"

int main () {
    int valores [] = {45,3,2,75,2,12,87,22};
    printf("%d\n",somaarray (valores,8));
    printf ("%d\n",mediaarray (valores ,8));
    printf ("%d\n", maior (valores ,8));
    return 0;
}