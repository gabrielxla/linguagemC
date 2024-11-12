#include <stdio.h>

int main () {

   char nome [20];
   printf ("Digite o seu nome\n");
   scanf ("%[^\n]s\n",&nome);
   printf ("O seu nome é %s\n", nome);


    return 0;
}