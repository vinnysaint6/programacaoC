#include <stdio.h>
// Define o valor da constante
#define LINHAS 5
#define COLUNAS 5

int main(){
    // Variáveis:
    int matriz[LINHAS][COLUNAS];
    int soma = 0;
    // Estrutura de repetição para incrementar + 1 no valor da váriável soma e exibir na tela
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}