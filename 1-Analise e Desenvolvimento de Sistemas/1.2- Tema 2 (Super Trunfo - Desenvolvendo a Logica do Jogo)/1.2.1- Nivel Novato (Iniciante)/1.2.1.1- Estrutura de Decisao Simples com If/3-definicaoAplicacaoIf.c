#include <stdio.h>

int main(){
    int idade = 20;

    // O {conteudo que estiver dentro da função If entre chaves} será executado, caso contrário o programa executa somente a primeira linha.
    if (idade >= 18){ 
        printf("Idade: %d\n", idade);
        printf("Você é maior de idade\n");
    }
}