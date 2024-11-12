#include <stdio.h>

void dados (int *x, int *y) {
    int soma = *x + *y;
    printf ("%d,AS posições de x e y:%p,%p\n",soma,x,y);
    
}
int main (){
    int a = 10;
    int b = 5;
    
    dados (&a,&b);
    printf ("AS posições de a e b:%p,%p\n",&a,&b);
    return 0;
}