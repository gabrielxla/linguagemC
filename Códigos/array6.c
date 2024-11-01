#include <stdio.h>

int main (){

    int num []= {13,8,23,95,47,14,10,45,165};
    int i;
    int rs=0;
    float media=0;
    for (i = 0; i <=8; i++)
    {
        rs+=num[i];
        media=rs/9;
        printf("A media é %.2f\n",media);
    }
    

}