#include <stdio.h>

int main(){
    int i = 1; // A variavel i inicia com o valor 1

    printf("Torre:\n"); // Exibe o nome da peça do Xadrez

    while (i <= 5){ // Verifica se o valor da variável i é menor ou igual 5 e repete o bloco enquanto o valor da variavel i for menor ou igual a 5
        printf("%d - Direita\n", i); // Imprimi o valor da variavel i indicando a movimentação da peça de acordo com a quantidade de repetições positivas
        i++; // Incrementa o valor da variável i em +1 e evita o loop infinito
    }

    printf("\n");
    printf("A torre moveu 5 casas para a direita. Saindo...\n"); // Após o final da repetição exibe a quantidade de casas que a peça moveu
    printf("\n");

    i = 0; // A variável i reinicia com o valor 0

    printf("Bispo:\n"); // Exibe o nome da peça do Xadrez

    do{
        if (i % 2 != 0) {  //  Caso o resto da divisão seja diferente de 0, imprime o resultado ímpar pelo menos uma vez
            printf("%d - Cima Direita\n", i); // Imprime o resultado indicando o movimento diagonal da peça de acordo com os números ímpares
        }
        i++; // Incrementa o valor da variável i em +1 e evita o loop infinito
    } while (i <= 10); // Enquanto i for menor ou igual a 10, ou seja, a condição for verdadeira, volta a repetir a condição

    printf("\n");
    printf("O Bispo moveu 5 casas na diagonal. Saindo...\n"); // Após o final da repetição exibe a quantidade de casas que a peça se moveu
    printf("\n");

    printf("Rainha:\n"); // Exibe o nome da peça do Xadrez

    for (i = 0; i >= -8; i--){ // A variável i reinicia com o valor 0, verifica se i é maior ou igual a -8, se for verdadeiro, decrementa o valor da variável i com -1
        if (i < 0){ // Verifica se a variável i é menor do que 0 e executa o bloco, caso seja falso, encerra a condição
            printf("%d - Esquerda\n", i); // Imprime o resultado indicando o movimento para a esquerda da peça de acordo com os números negativos
        }
    }
    
    printf("\n");
    printf("A rainha moveu 8 casas para a esquerda. Saindo...\n"); // Após o final da repetição exibe a quantidade de casas que a peça se moveu
    printf("\n");

    i = -1; // A variável i reinicia com o valor -1

    printf("Cavalo:\n"); // Exibe o nome da peça do Xadrez

    while (i >= -1){ // Loop externo - Controla as linhas (horizontal)
        for (int j = 0; j >= -2; j--){ // Loop interno - Controla as colunas (vertical)
            if (j < 0){ // Verifica se o valor da variável j do loop interno é negativa, se verdadeiro, imprime na tela indicando a movimentação de duas casas para Baixo
                printf("%d - Baixo\n", j);
            }
        }
        if (i < 0){ // Verifica se o valor da variável i do loop externo é negativa, se verdadeiro, imprime na tela indicando a movimentação de uma casa para Esquerda
            printf("%d - Esquerda\n", i);
        }
        i--;
    }

    printf("\n");
    printf("O Cavalo moveu 2 casas para Baixo e 1 casa para a esquerda. Saindo...\n"); // Após o final da repetição exibe a quantidade de casas que a peça se moveu
    printf("\n");

    return 0;
}