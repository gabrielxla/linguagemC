#include <stdio.h>

void cadastro(char *nome,char *emai, char *idade){
    FILE *arquivo;
    arquivo = fopen ("files/ponteiroca.txt","a");
    fprintf (arquivo,nome);
    fprintf (arquivo,emai);
    fprintf (arquivo,idade);
    fclose (arquivo);
}
int main () {
    char nome [30];
    char email [50];
    char idade [2] ;
    printf ("Digite seu nome\n");
    scanf ("%c[^\n]s",nome);
    printf ("Digite seu email\n");
    scanf ("%s\n",email);
    printf ("Digite sua idade\n");
    scanf ("%s\n",idade);
    cadastro(nome,email,idade);
    printf ("CADASTROU??\n");
    return 0;
}