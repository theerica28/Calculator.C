#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
 int main()
{
    
    float num1,num2;
    int operacao;
    
    
    printf("Seja Bem Vindo\n");
    printf("Calculadora Online\n");
    printf("Digite um numero\n");
    scanf("%f",&num1);
    printf("Digite outro numero\n");
    scanf("%f",&num2);
    printf("Escolha a operacao desejada\n");
    printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d",&operacao);
    
    do{
        
        if(operacao==1){
            printf("Resultado: %2.f",num1+num2);
        }
        
        if(operacao==2){
            printf("Resultado: %2.f",num1-num2);
            
        }
        
        else if(operacao==3){
            printf("Resultado: %2.f",num1*num2);
        }
        
    
        else if(operacao==4){
            printf("Resultado: %2.f",num1/num2);
        }
        
        while(operacao!=5);
    }
    
}

   

    
    

