#include <stdio.h>


int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é %f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é %c\n", opcao);

    /*
    scanf(''formato'', &variavel);

    A função printf("Digite sua idade: "); é usada para imprimir texto na tela
    A função scanf("%d", &idade); é usada para ler a entrada do usuário
    A função printf("Sua idade é: %d\n", idade); é usada novamente para imprimir texto na tela
    */

}