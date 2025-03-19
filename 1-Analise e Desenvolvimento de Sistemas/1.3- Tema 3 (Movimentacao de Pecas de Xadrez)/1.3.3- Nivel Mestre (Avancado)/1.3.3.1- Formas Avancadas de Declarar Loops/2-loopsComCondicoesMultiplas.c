#include <stdio.h>

int main(){
    /* Loops com condições múltiplas: Utilizam mais de uma condição para determinar quando devem continuar ou parar. Isso é frequentemente realizado com o loop for, 
    em que a expressão de condição pode incluir múltiplas condições combinadas usando operadores lógicos (“&&” para E lógico e “||” para OU lógico). */
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--){
        printf("i = %d, j = %d\n", i, j);
    }
    /* Nesse exemplo, o loop continua enquanto i for menor que 5 e j for maior que 5. As duas 
    condições são avaliadas simultaneamente e o loop só prossegue se ambas forem verdadeiras. */
    return 0;
}