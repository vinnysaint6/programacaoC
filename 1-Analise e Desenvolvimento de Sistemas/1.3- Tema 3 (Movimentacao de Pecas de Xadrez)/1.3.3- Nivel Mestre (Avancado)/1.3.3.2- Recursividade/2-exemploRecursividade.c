#include <stdio.h>

// Função recursiva para imprimir números de n até 1
void recursividadeLoop(int N){
    if (N > 0){
        printf("%d ", N); // Imprime o valor atual de N
        recursividadeLoop(N - 1); // Chama a si mesma com a N - 1
    }
}

int main(){
    int numero = 5;

    printf("Contagem regressiva: ");
    recursividadeLoop(numero);
    
    return 0;
}