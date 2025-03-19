#include <stdio.h>

int main(){
    int option;

    /* O do-while é particularmente útil em casos como menus interativos, no qual queremos que o menu seja exibido pelo 
    menos uma vez e continue sendo exibido até que o usuário escolha uma opção de saída. Veja! */

    do{ // <= Executa o bloco
        // Entrada de dados: Exibe o menu interativo
        printf("Menu:\n");
        printf("[1]. Opção 1\n");
        printf("[2]. Opção 2\n");
        printf("[3]. Sair\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &option); // <= Ler valor digitado
        
        switch (option){ // <= Nesse exemplo, o menu é exibido pelo menos uma vez, e o loop continua até que o usuário escolha a opção de sair (opção 3).
            case 1:
                printf("Você escolheu a opção [1]\n");
                break;
            case 2:
                printf("Você escolheu a opção [2]\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! tente novamente...\n");
                break;
        }
    } while (option != 3); // Enquanto o valor da variável for verdadeiro, repete a condição. Caso o valor seja falso, finaliza a execução.

    return 0;
}