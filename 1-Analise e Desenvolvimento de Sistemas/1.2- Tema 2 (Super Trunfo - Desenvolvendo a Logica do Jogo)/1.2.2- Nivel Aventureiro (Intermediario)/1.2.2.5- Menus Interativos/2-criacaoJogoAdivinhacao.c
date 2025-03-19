#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("[1]. Iniciar Jogo\n");
    printf("[2]. Ver Regras\n");
    printf("[3]. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            srand (time(0)); // srand (time(0)) => Inicializa o gerador de numero aleatório com base no tempo atual
            numeroSecreto = rand() % 10; // rand () => Gera um número aleatório inteiro e o operador % 10 limita esse número ao intervalo de 0 a 9
            printf("Adivinhe o número de [0 à 9]: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite){
                printf("Número Secreto: %d\n", numeroSecreto);
                printf("Parabéns! Você acertou!\n");
            } else{
                printf("Número Secreto: %d\n", numeroSecreto);
                printf("Você errou!\n");
            }
            break;
        case 2:
            printf("As regras são.....\n");
            // Código para exibir regras
            break;
        case 3:
            printf("Saindo do jogo....\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }
}