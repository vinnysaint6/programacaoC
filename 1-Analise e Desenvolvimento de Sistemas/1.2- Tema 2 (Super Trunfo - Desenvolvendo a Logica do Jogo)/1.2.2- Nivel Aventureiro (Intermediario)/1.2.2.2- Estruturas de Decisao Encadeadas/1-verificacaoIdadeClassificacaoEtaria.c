#include <stdio.h>

int main(){
    
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Criança: menor que 12 anos
    // Adolescente: maior que 12 e menor que 18 anos
    // Adulto: maior que 18 e menor que 60 anos
    // Idoso: maior que 60 anos

    if (idade < 12){
        printf("Você é uma criança!\n");
    }else if (idade >= 12 && idade < 18){
        printf("Você é um adolescente!\n");
    }else if (idade >= 18 && idade < 60){
        printf("Você é um adulto!\n");
    }else{
        printf("Você é um idoso!\n");
    }
    
    return 0;
}