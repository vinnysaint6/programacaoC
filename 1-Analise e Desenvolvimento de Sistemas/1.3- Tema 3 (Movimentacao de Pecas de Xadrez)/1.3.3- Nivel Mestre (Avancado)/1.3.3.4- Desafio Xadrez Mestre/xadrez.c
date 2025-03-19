#include <stdio.h>

void moverTorre (int casas){
    if (casas > 0){
        moverTorre(casas - 1);
        printf("%d - Direita\n", casas);
    }   
}

void moverBispo (int casas){
    if (casas > 0){
        for (int i = 1; i <= 5; i++){
            printf("%d - Cima/", i);
            for (int j = i; j <= i; j++){
                printf(" Direita\n");
            }
        }
    }
}

void moverRainha (int casas){
    if (casas > 0){
        printf("%d - Esquerda\n", casas);
        moverRainha(casas - 1);
    }
}

void moverCavalo (int casas){
    if (casas > 0){
        for (int i = 1; i <= 2; i++){
            printf("%d - Cima\n", i);
            if (i == 2){
                for (int j = 1; j <= 1; j++){
                    printf("%d - Direita\n", j);
                }
            }
        }
    }
}

int main(){

    printf("Movimentos da Torre:\n");
    moverTorre(5);

    printf("\n");

    printf("Movimentos do Bispo:\n");
    moverBispo(5);
    
    printf("\n");

    printf("Movimentos da Rainha:\n");
    moverRainha(8);

    printf("\n");

    printf("Movimentos do Cavalo:\n");
    moverCavalo(3);

    return 0;
}