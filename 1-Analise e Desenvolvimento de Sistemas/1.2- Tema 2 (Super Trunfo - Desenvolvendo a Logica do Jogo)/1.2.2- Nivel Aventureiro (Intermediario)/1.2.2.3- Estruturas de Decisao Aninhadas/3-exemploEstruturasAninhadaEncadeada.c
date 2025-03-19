#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0){ // <Estrutura de decisão aninhada>
        if (numero % 2 == 0){
            printf("Número par!\n");
        } else{
            printf("Número ímpar!\n");
        }
    } else if (numero == 0){ // <Estrutura de decisão encadeada>
        printf("Número é zero!\n");
        } else{
            printf("Número é negativo!\n");
        }

    return 0;
}