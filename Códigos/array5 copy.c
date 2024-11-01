#include <stdio.h>

int main (){

    int num []={13,8,23,95,47,14,10,45,165};
    int i;
    int m;
    int rs=0;
    for (i=0;i<=8; i++)
    {   
        rs+= num[i];
        
            printf ("O resultado é %d\n",rs);
    
    }
    
return 0;
}