#include <stdio.h>
int main () {

    int num,i=1,rs=num*i;
    
    printf("Digite um numero\n");
    scanf("%d",&num);

    while (i<=10)
    {
        rs=num*i;
        printf("\nA mutiplicação entre %d e %d = %d\n",num,i,rs);
        i++;

    }
    
}