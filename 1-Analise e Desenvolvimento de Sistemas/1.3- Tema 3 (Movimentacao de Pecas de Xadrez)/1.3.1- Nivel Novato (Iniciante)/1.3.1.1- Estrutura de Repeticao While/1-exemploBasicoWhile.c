#include <stdio.h>

int main(){
    int i = 1;

    while (i <= 5){ // <= O loop while verifica a condição i <= 5
        printf("%d - ", i);
        i++; // Dentro do loop, o valor de i é impresso e, em seguida, incrementado em 1
        // Enquanto essa condição for verdadeira, o loop continuará sendo executado
    }
    // Quando i se torna 6, a condição i <= 5 se torna falsa, e o loop termina.
        
    return 0;
}