#include <stdio.h>

/* Embora o incremento em um loop for geralmente seja um simples incremento de 1, ele pode ser 
adaptado para diferentes necessidades. Por exemplo, podemos iterar de 10 em 10, veja! */ 

int main() {
    for (int i = 0; i <= 100; i += 10) { // <= A variável i é incrementada em 10 a cada iteração, permitindo imprimir múltiplos de 10 de 0 a 100.
        printf("%d\n", i);
    }
   
    return 0;
}