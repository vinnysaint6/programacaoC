#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um número [1/2]: ");
    scanf("%d", &variavel);

    switch (variavel) {
        case 1:
            printf("Código a ser executado se variavel == 1\n");
            printf("Teste do case 1");
        break;
        case 2:
            printf("Código a ser executado se variavel == 2\n");
            printf("Teste do case 2");
        break;
            // Você pode adicionar quantos casos forem necessários
        default:
            printf("Código a ser executado se nenhum dos casos acima for verdadeiro\n"); // Se o valor da váriavel não for 1 ou 2
            printf("Tente novamente!");
    }

    // Obs importante: Caso a variável for do tipo Char, o valor da case precisa estar entre aspas simples, exemplo case 'a', case 'b'...

    return 0;
}