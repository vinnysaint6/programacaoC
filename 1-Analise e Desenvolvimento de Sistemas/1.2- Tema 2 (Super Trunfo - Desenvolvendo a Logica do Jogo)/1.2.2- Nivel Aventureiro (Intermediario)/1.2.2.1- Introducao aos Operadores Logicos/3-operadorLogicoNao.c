#include <stdio.h>

int main(){
    int a = -5;

    /*
    O operador ! inverte o valor lógico de uma expressão. Se a expressão for verdadeira, 
    ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro.
    */

    if(!(a > 0)){
        printf("A variável é negativa.\n");
    }else{
        printf("A variável é positiva.\n");
    }

    return 0;
}