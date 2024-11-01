#include<stdio.h>

int main (){
    int num[]={10,5,9,4,0,75,51};
    
    int m=num[0];
    int p;
    for (p = 1; p<=6; p++)
    {
        if (num[p]> m)
        {
            m=num[p];
        }
        
    }
    printf ("%d",m);
    
    
    return 0;
}