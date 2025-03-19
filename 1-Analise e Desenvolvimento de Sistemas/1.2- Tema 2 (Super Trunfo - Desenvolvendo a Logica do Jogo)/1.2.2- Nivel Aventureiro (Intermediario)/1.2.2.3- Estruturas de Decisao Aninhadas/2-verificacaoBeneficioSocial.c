#include <stdio.h>

int main(){
    int idade, dependentes;
    float renda;

    // Primeira condição: Idade do usuário está entre 18 e 65 anos.
    // Segunda condição: Se a renda do usuário é menor que 3.000.
    // Terceira condição: Verificar se o número de dependentes é maior que 2.

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65){
        if (renda < 3000.00){
            if (dependentes > 2){
                printf("Você atende a todos os critérios!\n");
            } else{
                printf("Você não está qualificado para o beneficio social devido a quantidade de dependentes!\n");
            }
        } else{
            printf("Você não está qualificado para o beneficio social devido a renda!\n");
        }
    } else{
        printf("Você não está qualificado para o beneficio social devido a idade!\n");
    } 

    return 0;
}