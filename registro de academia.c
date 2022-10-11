#include <stdio.h>
#include <string.h>
#include <locale.h>
    void main(){
    
    printf("digite seu nome: ");
    char letras[100];
        scanf(" %[^\n]",letras);
    
    printf("digite seu sexo: ");
    char sexo;
        scanf(" %c",&sexo);

    printf("digite sua idade: ");    
    int idade;
        scanf("%d",&idade);
    
    printf("digite sua altura: ");
    float altura;
    scanf("%f",&altura);
    
    printf("digite sua peso: ");
    float peso;
    scanf("%f",&peso);
    
        printf("nome: %s\n",letras);
        printf("sexo: %c\n idade: %d\n sua altura: %.2f\n seu peso: %.1f\n",sexo,idade,altura,peso);
    
    float IMC;
    IMC = peso / (altura * altura);
        printf("o resultado de seu IMC é: %.2f",IMC);
    
    if(IMC < 18.5)
        printf("\n abaixo do peso");
    
    else if ((IMC >= 18.5) && (IMC < 24.9)){
        printf("\nestá com o peso ideal");
    }
    
    else if ((IMC >= 25) && (IMC < 29.9)){
        printf("\nacima do peso.");
    }
    
    else if ((IMC > 30.0) && (IMC < 39.9)){
        printf("\n obesidade");
    }
   
}
