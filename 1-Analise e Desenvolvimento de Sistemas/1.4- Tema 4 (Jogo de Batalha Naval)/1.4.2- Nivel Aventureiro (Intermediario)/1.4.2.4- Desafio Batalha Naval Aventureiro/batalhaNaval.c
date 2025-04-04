#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){
    // Declaração de variáveis
    int linha[LINHAS];
    char coluna[COLUNAS];
    int tabuleiro[LINHAS][COLUNAS];
    int navioHorizontal[3];
    int navioVertical[3];
    int navioDiagonal[3];

    // Estrutura de repetição para preencher o conteúdo do tabuleiro com o valor 0
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Estrutura de repetição para receber a posição do navio horizontal
    for (int i = 0; i < 1; i++){
        navioHorizontal[i] = 3;
        tabuleiro[2][3] = navioHorizontal[i];
        tabuleiro[2][4] = navioHorizontal[i];
        tabuleiro[2][5] = navioHorizontal[i];
    }

    // Estrutura de repetição para receber a posição do navio vertical
    for (int j = 0; j < 1; j++){
        navioVertical[j] = 3;
        tabuleiro[5][7] = navioVertical[j];
        tabuleiro[6][7] = navioVertical[j];
        tabuleiro[7][7] = navioVertical[j];
    }

    for (int i = 1; i < 4; i++){
        navioDiagonal[i] = 3;
        tabuleiro[i][i] = navioDiagonal[i];
    }

    // Estrutura de repetição para receber a quantidade de linhas representadas de 1 a 10
    for (int i = 0; i < LINHAS; i++){
        linha[i] = i + 1;
    }

    // Estrutura de repetição para receber a quantidade de colunas representadas de A a J
    for (int i = 0; i < COLUNAS; i++){
        coluna[i] = 'A' + i;
    }
    printf("\n");

    // Exibe o nome do jogo
    printf("TABULEIRO BATALHA-NAVAL\n");
    printf("   ");

    // Imprime na tela as colunas representada pelas letras de A á J (0... 9)
    for (int i = 0; i < COLUNAS; i++){
        printf("%c ", coluna[i]);
    }
    printf("\n");

    // Exibe a posição dos navios no tabuleiro
    for (int i = 0; i < LINHAS; i++){
        printf("%2d", linha[i]);
        for (int j = 0; j < COLUNAS; j++){
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}