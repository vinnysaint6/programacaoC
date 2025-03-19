#include <stdio.h>

int main(){

    // Loops com múltiplas variáveis
    for (int i = 0, j = 10; i < j; i++, j--){ // Nesse exemplo, i é incrementado e j é decrementado em cada iteração, permitindo um controle simultâneo de duas variáveis dentro do mesmo loop.
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}