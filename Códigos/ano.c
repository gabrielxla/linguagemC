#include <stdio.h>

int main () {

    int ano;

    printf ("Digite o ano que queira saber se é bissexto\n");
    scanf ("%d", &ano);

    if (ano%4 == 0){ 
        printf ("O ano e bissexto\n");

    }
    else {
        printf ("O ano, não e bissexto\n");
    }
}