#include <stdio.h>

int main () {
    FILE *arquivo;
    arquivo = fopen ("files/texto.txt","a"); 
    fprintf (arquivo,"\nbom dia");
    fclose (arquivo);
    printf ("OLA MUNDO");
    return 0;
}