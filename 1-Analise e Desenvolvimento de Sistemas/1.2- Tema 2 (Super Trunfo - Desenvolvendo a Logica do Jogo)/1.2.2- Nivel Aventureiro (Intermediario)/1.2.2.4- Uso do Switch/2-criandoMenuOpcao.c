#include <stdio.h>

int main(){
    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção:\n");
    printf("Digite [1] para verificar saldo\n");
    printf("Digite [2] para realizar depósito\n");
    printf("Digite [3] para saque\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("O seu saldo atual é de: R$ %.2f\n", saldo);
        break;
        case 2:
            printf("Digite o banco que você deseja depositar:\n");
            printf("Digite a agência:\n");
            printf("Digite a conta:\n");
            printf("Digite o valor do depósito:\n");
        break;
        case 3:
            printf("Digite o valor a sacar:\n");
            printf("Saque realizado com sucesso.\n");
        break;
        default:
            printf("Opção inválida.");
    }

    return 0;
}