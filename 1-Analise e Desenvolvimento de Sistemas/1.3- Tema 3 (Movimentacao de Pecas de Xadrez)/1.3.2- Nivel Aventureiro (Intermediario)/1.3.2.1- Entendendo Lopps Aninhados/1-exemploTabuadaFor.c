#include <stdio.h>

// A Estrutura For é mais utilizada para loops aninhados
int main(){ 

    // Em termos simples, um loop aninhado é um loop dentro de outro loop.
    for (int i = 1; i <= 10; i++){ // Loop externo
        for (int j = 1; j <= 10; j++){ // Loop Interno
            printf("%d x %d = %d\n", i, j, i * j); // Exibe a tabuada de i x j
        }
        printf("\n");
    } // Para cada iteração do loop externo, o loop interno é executado completamente.

    /* Nesse exemplo, temos um loop for dentro de outro loop for. O loop externo controla as linhas (multiplicando), e o loop interno controla as colunas 
    (multiplicador). Para cada valor de i (de 1 a 10), o loop interno percorre j (de 1 a 10), e, em cada iteração do loop interno, a multiplicação de i e j 
    é impressa. */

    return 0;
}