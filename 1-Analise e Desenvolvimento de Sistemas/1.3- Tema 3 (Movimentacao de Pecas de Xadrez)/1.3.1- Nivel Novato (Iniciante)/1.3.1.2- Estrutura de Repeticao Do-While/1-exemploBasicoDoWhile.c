#include <stdio.h>

int main(){
    int i = 1; // <= Variável i é inicializada com o valor 1

    // Exemplo simples no qual desejamos imprimir os números de 1 a 5. Aqui está como isso pode ser feito com um loop do-while.
    do{ 
        // O bloco de código dentro do do-while imprime o valor de i e, em seguida, incrementa i com +1
        printf("%d\n", i); // <= Exibe a saída de dados
        i++; // <= incrementa o valor da variável com +1
    } while (i <= 5); // <= Após a execução do bloco, a condição i <= 5 é verificada
    // Se a condição for verdadeira, o loop repete; se for falsa, o loop termina.
    

    return 0;
}