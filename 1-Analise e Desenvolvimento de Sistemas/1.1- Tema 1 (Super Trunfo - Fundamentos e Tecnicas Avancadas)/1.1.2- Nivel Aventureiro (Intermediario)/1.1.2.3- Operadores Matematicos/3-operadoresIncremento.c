#include <stdio.h>


int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;
    printf("Antes incremento: %d\n", numero1);

    resultado = numero1++;
    //printf("Após incremento: %d\n", numero1); // Exemplo1 (incremento): numero1 = numero1 + 1; Exemplo2 (atribuição): numero1 += 1

    printf("Após Pós-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); // OBS: Operador é digitado depois do valor, Exemplo: "numero1++"
    // Exemplo Pós-Incremento: 
    // resultado = numero1; 
    // numero1++;

    resultado = ++numero1;
    printf("Após Pré-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("Após decremento: %d\n", numero1); // Exemplo1 (decremento): numero1 = numero1 - 1; Exemplo2 (atribuição): numero1 -= 1
    resultado = numero1--;
    printf("Após Pós-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}