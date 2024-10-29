#include <stdio.h>
 
 int main () {
    int placa;
    printf ("Digite o numero final da sua placa e tecle\n");
    scanf ("%d",&placa);

    if (placa==1 || placa ==2)
    {   printf ("O veiculo não pode rodar Segunda feira\n");
        
    }
    else if (placa == 3 || placa == 4) {
        printf ("Não pode rodar terça feira\n");
    }
    else if (placa== 5 || placa ==6)
    {
        printf ("Nao pode rodar Quarta feira\n");
    }
    else if (placa== 7 || placa ==8)
    {
        printf ("Nao pode rodar Quinta feira\n");
    }
    else if (placa== 9 || placa ==0)
    {
        printf ("Nao pode rodar Sexta feira\n");
    }
    
    return 0;

 }