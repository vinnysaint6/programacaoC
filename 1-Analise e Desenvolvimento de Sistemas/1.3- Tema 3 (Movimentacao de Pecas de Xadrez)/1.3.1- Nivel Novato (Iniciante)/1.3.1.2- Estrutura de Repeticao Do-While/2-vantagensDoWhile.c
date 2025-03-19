#include <stdio.h>

int main(){
    int num;
    
    /* Vantagens do Do-While: É garantir que o bloco de código seja executado pelo menos uma vez. 
    Isso é particularmente útil em situações em que as ações iniciais precisam ser 
    realizadas antes de qualquer verificação de condição. Por exemplo, ao solicitar entrada do usuário, 
    queremos garantir que a solicitação ocorra pelo menos uma vez. Observe! */
    
    do{
        // Entrada de dados
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num); // Lê o valor digitado
        
        if (num >= 0){ // verifica a condição, se o valor da váriável é verdadeiro ou falso
            // Saída de dados
            printf("Você digitou: %d\n", num);
        }
    } while (num >= 0); // Enquanto o valor da variável for verdadeiro, repete a condição. Caso o valor seja falso, finaliza a execução.

    printf("Número negativo detectado. Saindo...\n");

    return 0;
}