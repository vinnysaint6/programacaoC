#include <stdio.h>

int main(){
    // Declaração de variaveis
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // Entrada de dados dos valores
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    // Execução da estrutura condicional da variavel temperatura
    if(temperatura > 30){
        printf("Temperatura está alta!\n");
    }else{
        printf("Temperatura está dentro dos parâmetros!\n");
    }

    // Execução da estrutura condicional da variavel umidade
    if(umidade > 50){
        printf("Umidade elevada!\n");
    }else{
        printf("Umidade está dentro dos parâmetros!\n");
    }

    // Execução da estrutura condicional da variavel estoque
    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo!\n");
    }else{
        printf("Estoque normal!\n");
    }

    return 0;
}