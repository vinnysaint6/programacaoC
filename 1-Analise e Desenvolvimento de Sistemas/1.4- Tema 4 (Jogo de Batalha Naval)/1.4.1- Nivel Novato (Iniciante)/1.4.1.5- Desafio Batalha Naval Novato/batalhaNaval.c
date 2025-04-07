#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3
#define MAR 0

int main(){
    // Declaração de variáveis
    int linha[LINHAS];
    char coluna[COLUNAS];
    int tabuleiro[LINHAS][COLUNAS];
    int navioHorizontal[NAVIO];
    int navioVertical[NAVIO];
    int navioDiagonalPri[NAVIO];
    int navioDiagonalSec[NAVIO];
    
    // Estrutura de repetição para preencher o conteúdo do tabuleiro com o valor 0
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = MAR;
        }
    }

    // Estrutura de repetição para receber a posição do navio horizontal
    int coordenadaX = 2;
    int coordenadaY = 3;
    for (int i = 0; i < NAVIO; i++){
        navioHorizontal[i] = NAVIO;
        tabuleiro[coordenadaX][coordenadaY] = navioHorizontal[i];
        coordenadaY++;
    }

    // Estrutura de repetição para receber a posição do navio vertical
    coordenadaX = 5;
    coordenadaY = 7;
    for (int j = 0; j < NAVIO; j++){
        navioVertical[j] = NAVIO;
        tabuleiro[coordenadaX][coordenadaY] = navioVertical[j];
        coordenadaX++;
    }

    // Estrutura de repetição para receber a posição do navio diagonal principal
    int diagonalX = 1;
    for (int i = 0; i < NAVIO; i++){
        navioDiagonalPri[i] = NAVIO;
        tabuleiro[diagonalX][diagonalX] = navioDiagonalPri[i];
        diagonalX++;
    }

    // Estrutura de repetição para receber a posição do navio diagonal secundária
    int diagonalSecX = 3; // Começa na linha 0
    for (int i = 0; i < NAVIO; i++) {
        navioDiagonalSec[i] = NAVIO;
        tabuleiro[diagonalSecX][9 - diagonalSecX] = navioDiagonalSec[i]; // Posiciona na diagonal secundária
        diagonalSecX++;
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