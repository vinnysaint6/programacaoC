#include <stdio.h>
 
int main() {

    /* São loops em que a variável de controle é modificada de maneiras mais sofisticadas que simples incrementos ou decrementos. 
    Esses loops frequentemente utilizam expressões condicionais, cálculos matemáticos ou funções para alterar a variável de controle a cada iteração. 
    Isso permite uma maior flexibilidade e controle sobre o fluxo do loop, adaptando-se a requisitos específicos ou padrões de iteração não lineares. */
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    
    /* Nesse exemplo, a variável i é atualizada de maneira diferente dependendo de sua paridade: se i for par, é incrementado por 1; se for ímpar, é incrementado por 2. 
    Essa lógica de atualização complexa permite que o loop siga um padrão de iteração não trivial. */

    return 0;
}