#include <stdio.h>

int main(){
    int linha [10];
    char coluna [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][10];
    int navioHorizontal [3];
    int navioVertical [3];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++){
        navioHorizontal[i] = 3;
        navioVertical[i] = 3;
    }

    printf("\n");

    printf("TABULEIRO BATALHA-NAVAL\n");
    printf("   ");
    
    for (int j = 0; j < 10; j++){
        printf("%c ", coluna[j]);
    }
    printf("\n");

    return 0;
}