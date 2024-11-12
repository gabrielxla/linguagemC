#include <stdio.h>

int maiorr (int n1, int n2) {
       int rs;
        if (n2 > n1){
            rs = n2;
        }
        else {
            printf ("São iguais\n");
        }
        return rs;
    }

char sexo (char letra){
    if(letra == 'M'|| letra == 'm'){
        printf ("Masculino");
    }
    else if (letra=='F'|| letra =='f')
    {
        printf ("feminino");
    }
    else {
        printf ("Sexuo INVALIDO");
    }
    
} 
      void vogal (char letra){
        if (letra=='a'|| letra=='e'||letra=='i'||letra=='o'||letra=='u')
        {
            printf ("A letra é vogal");
        }
        else {
            printf ("A letra não é uma vogal");
        }
      } 

void reajuste (float salario) {

    float valor_aumento;
    float novo_salario;
    if (salario <= 280) {
        valor_aumento = salario * (20/100);
        novo_salario = salario + valor_aumento;
        printf ("O salario antigo é %f e foi reajustado em 20%. O valor de aumento é %f e novo salario é %f\n",salario,valor_aumento,novo_salario);
    }
    else if (salario > 280 && salario <= 700)
    {
        valor_aumento= salario*0.15;
        novo_salario = salario + valor_aumento;
        printf ("O salario antigo é %f e foi reajustado em 15%. O valor de aumento é %f e novo salario é %f\n",salario,valor_aumento,novo_salario);

    }
    else if (salario <=1500){
        valor_aumento= salario*0.10;
        novo_salario = salario + valor_aumento;
        printf ("O salario antigo é %f e foi reajustado em 10%. O valor de aumento é %f e novo salario é %f\n",salario,valor_aumento,novo_salario);
    }
    else {
        valor_aumento= salario*0.05;
        novo_salario = salario + valor_aumento;
        printf ("O salario antigo é %f e foi reajustado em 5%. O valor de aumento é %f e novo salario é %f\n",salario,valor_aumento,novo_salario);
    }
    
    }
