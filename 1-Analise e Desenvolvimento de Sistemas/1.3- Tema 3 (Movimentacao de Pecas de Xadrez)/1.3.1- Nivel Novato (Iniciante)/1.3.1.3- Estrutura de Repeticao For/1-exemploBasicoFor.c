#include <stdio.h>

// Vamos considerar um exemplo simples no qual queremos imprimir os números de 1 a 5.
int main(){

    for (int i = 1; i <= 5; i++){   
        // A variável i é inicializada com 1
        // A condição i <= 5 é verificada antes de cada iteração
        // Se a condição for verdadeira, o bloco de código que imprime i é executado
        printf("%d\n", i);
        // Após a execução do bloco, a variável i é incrementada em 1
        // O loop continua até que a condição se torne falsa.
    }

    /* É especialmente útil por sua clareza e concisão. Todas as informações relevantes para o controle do loop estão contidas na própria estrutura for, 
    tornando o código mais fácil de ler e entender. Essa estrutura é ideal para situações em que o número de iterações é conhecido antecipadamente, 
    como ao iterar sobre os elementos de um array, ou executar um bloco de código um número fixo de vezes. */

    return 0;
}