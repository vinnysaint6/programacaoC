#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;

    printf("x == y: %d\n", x == y); // indica que x é igual a y após a conversão implícita de tipos.
    printf("x != y: %d\n", x != y); // indica que x não é diferente de y.

    /*
    Observação: Antes da comparação, o compilador realiza uma conversão implícita 
    do tipo int (x) para float.  Isso ocorre porque o operador relacional (== ou !=) 
    precisa comparar valores do mesmo tipo.  Nesse caso, o valor de 'x' (5) é 
    convertido para 5.0 (float) antes da comparação com 'y'.
    */

    return 0;
}