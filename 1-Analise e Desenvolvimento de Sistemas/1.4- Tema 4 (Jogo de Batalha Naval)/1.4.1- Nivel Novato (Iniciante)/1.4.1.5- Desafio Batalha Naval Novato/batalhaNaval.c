#include <stdio.h>

int main(){
    // Declaração de variáveis
    int linha[10];
    char coluna[10];
    int tabuleiro[10][10];
    int navioHorizontal[3];
    int navioVertical[3];

    // Estrutura de repetição para preencher o conteúdo do tabuleiro com o valor 0
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Estrutura de repetição para receber a posição dos navios horizontal e vertical
    for (int i = 0; i < 3; i++){
        navioHorizontal[i] = 3;
        navioVertical[i] = 3;
    }

    // Estrutura de repetição para receber a quantidade de linhas representadas de 1 a 10
    for (int i = 0; i < 10; i++){
        linha[i] = i + 1;
    }

    // Estrutura de repetição para receber a quantidade de colunas representadas de A a J
    for (int i = 0; i < 10; i++){
        coluna[i] = 'A' + i;
    }

    printf("\n");

    // Exibe o nome do jogo
    printf("TABULEIRO BATALHA-NAVAL\n");
    printf("   ");

    // Imprime na tela as colunas representada pelas letras de A á J (1... 10)
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);
    }
    printf("\n");

    // Posiciona o navio horizontal na linha 2 coluna 3, 4 e 5
    // Posiciona o navio Vertical na linha 5, 6 e 7 coluna 7
    // Exibe a posição dos navios no tabuleiro
    for (int i = 0; i < 10; i++){
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++){
            tabuleiro[2][3] = navioHorizontal[0];
            tabuleiro[2][4] = navioHorizontal[1];
            tabuleiro[2][5] = navioHorizontal[2];

            tabuleiro[5][7] = navioVertical[0];
            tabuleiro[6][7] = navioVertical[1];
            tabuleiro[7][7] = navioVertical[2];

            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}