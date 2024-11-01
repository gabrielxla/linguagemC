#include <stdio.h>

int main (){

    int a1[] = {10,2,4,6,35,78,220};
    int a2[] = {10,2,4,6,38,220,78,102,16,18};

    int p,s;

    for (p=0;p<=6;p++ )
    {
        for (s = 0;s<=9;s++)
        {
            if (a1[p]== a2 [s])
            {
                printf("%d\n",a1[p]);
                break;
            }
            
        }
        
    }
    return 0;
}