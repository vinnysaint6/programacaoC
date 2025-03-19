#include <stdio.h>
 
int main() {

    // Uso de continue e break: Os comandos continue e break são úteis para evitar certas condições ou para terminar o loop com base em critérios específicos.
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    } 
    // Nesse exemplo, quando i é 5, continue pula a impressão, e quando i é 8, break termina o loop.
    return 0;
}