#include <stdio.h>

int main(){

    // Verificação de pares de números
    for (int i = 1; i <= 5; i++){ 
        for (int j = 1; j <= 5; j++){ 
            if ((i + j) % 2 == 0){
                printf("(%d, %d)\n", i, j);
            }
        }
        printf("\n");
    }

    return 0;
}