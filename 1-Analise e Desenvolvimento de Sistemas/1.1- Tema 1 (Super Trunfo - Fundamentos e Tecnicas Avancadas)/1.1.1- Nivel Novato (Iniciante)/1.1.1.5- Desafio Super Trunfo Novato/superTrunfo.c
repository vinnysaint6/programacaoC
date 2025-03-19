#include <stdio.h>


int main(){

    char estado1, estado2; 
    char codCarta1[20], codCarta2[20], nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pTuristico1, pTuristico2; 
    float area1, area2, pib1, pib2;

    printf("\n");
    printf("------------------->>> DESAFIO SUPERTRUNFO <<<-------------------\n");
    printf("-------------------->>> DADOS DA 1ª CARTA <<<-------------------\n");
    printf("\n");

    printf("Digite o estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", &codCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto (PIB): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &pTuristico1);
    
    printf("\n");
    printf("------------------->>> DESAFIO SUPERTRUNFO <<<-------------------\n");
    printf("-------------------->>> DADOS DA 2ª CARTA <<<-------------------\n");
    printf("\n");

    printf("Digite o estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", &codCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto (PIB): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &pTuristico2);
    printf("\n");

    printf("\n");
    printf("------------------->>> CARTA 1 <<<-------------------\n");
    printf("\n");

    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pTuristico1);

    printf("\n");
    printf("------------------->>> CARTA 2 <<<-------------------\n");
    printf("\n");

    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n",  pib2);
    printf("Números de Pontos Turísticos: %d\n", pTuristico2);
    printf("\n");

    return 0;

}