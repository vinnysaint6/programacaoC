#include <stdio.h>

int main(){
    int numero;

    numero = 10;

    if (numero % 2 == 0){
        //Bloco de código a ser executado se a condição for verdadeira
        printf("O numero é par!\n");
    } else{
        //Bloco de código a ser executado se a condição for falsa
        printf("O numero é ímpar\n");
    }

    return 0;
}