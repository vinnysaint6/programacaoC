#include <stdio.h>

int main(){

    int N, i, resultado;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&N);

    resultado = 0;
    for(i = 1; i <= 10; i++){
        resultado = N * i;
        printf("%d X %d = %d\n",N,i,resultado);
    }

    return 0;
}
