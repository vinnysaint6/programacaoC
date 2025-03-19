#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int idade = 15;
    int resultado;

    // condicao ? valor_se_verdadeiro : valor_se_falso;
    resultado = idade >= 18 ? 1 : 0 ;

    if (resultado == 1){
        printf("Você é maior de idade!\n");
    } else {
        printf("Você é menor de idade\n");
    }

    return 0;
}