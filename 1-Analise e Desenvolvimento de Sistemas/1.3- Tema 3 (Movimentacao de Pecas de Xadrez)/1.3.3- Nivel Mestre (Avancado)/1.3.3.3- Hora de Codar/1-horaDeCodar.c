#include <stdio.h>

void recursivo(int numero){
    if (numero > 0){
        recursivo(numero - 1); // Aterar a ordem realiza a contagem crescente
        printf("%d \n", numero); 
    }
}

int main(){
    int quantidade = 10;

    printf("Contagem regressiva...\n");
    recursivo(quantidade);

    return 0;
}