#include <stdio.h>


int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: ");
    scanf("%d", &num1);
    printf("Entre com o numero 2: ");
    scanf("%d", &num2);
    // Operação Soma
    soma = num1 + num2;

    // Operação Subtração
    subtracao = num1 - num2;

    // Operação Multiplicação
    multiplicacao = num1 * num2;

    // Operação Divisão
    divisao = num1 / num2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);


}