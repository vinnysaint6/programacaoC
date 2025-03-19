#include <stdio.h>
 
int main() {
    int num;
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);

        /* Aqui, o loop while continuará lendo e imprimindo números enquanto o usuário não digitar um número negativo. 
        Quando um número negativo é inserido, a condição num >= 0 se torna falsa e o loop termina. */
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}