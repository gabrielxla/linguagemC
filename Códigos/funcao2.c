#include <stdio.h>
#include "funcao1.c"
int resto (int valor,int div);

int main (){
    
    printf("%d\n",resto(5,2));
    return 0;
}

int resto (int valor, int div){
    return valor / div;

}
