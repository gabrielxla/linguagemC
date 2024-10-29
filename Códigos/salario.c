#include <stdio.h>

int main (){
    float salariobruto,vt,vt2,inss,inss2,fgts,fgts2,salarioliquido,salarioliquido2,num6,num7,num8,divisor,mutiplicador;

    printf ("Digite qual é o seu salário: \n");
    scanf ("%f", &salariobruto);
    
    mutiplicador=salariobruto;
    num6=6;
    num7=7;
    num8=8;
    divisor=100;
    vt= num6 / divisor;
    vt2= vt*mutiplicador;
    inss= num7/divisor;
    inss2= inss*mutiplicador;
    fgts= num8/divisor;
    fgts2= fgts*mutiplicador;
    salarioliquido= vt2+inss2+fgts2;
    salarioliquido2=mutiplicador-salarioliquido;
    
    
    printf("O seu salario liquido é %.2f \n", salarioliquido2);
    return 0;
}