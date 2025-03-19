#include <stdio.h>


int main(){
    int idade = 38;
    float altura = 1.89;
    char opcao = 'S';
    char nome[20] = "Vinicius";

    printf("idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);

    /*
    printf(“%formato1 %formato2 %formato3”, variável1, variável2, variável3);
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

}