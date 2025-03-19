#include <stdio.h>

int main(){
    int linha [10] = {1,2,3,4,5,6,7,8,9,10};
    char coluna [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, // Podemos utilizar a estrutura for para não perder tempo
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    int navioHorizontal [3] = {3,3,3};
    int navioVertical [3] = {3,3,3};

    printf("\n");
    printf("--TABULEIRO BATALHA NAVAL--\n");
    printf("\n");

    printf("  ");
    for (int j = 0; j < 10; j++){
        printf("%2c", coluna[j]);
    }  
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%2d", linha[i] = i+1);
        for (int j = 0; j < 10; j++){
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("-----NAVIO HORIZONTAL-----\n");
    printf("\n");

    printf("  ");
    for (int j = 0; j < 10; j++){
        printf("%2c", coluna[j]);
    }  
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++){
            if (i >= 2 && i < 5 && j >= 3 && j < 6){
                tabuleiro[i][j] = navioHorizontal[i];
                printf("%2d", navioHorizontal[i]);
            } else {
                printf("%2d", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}