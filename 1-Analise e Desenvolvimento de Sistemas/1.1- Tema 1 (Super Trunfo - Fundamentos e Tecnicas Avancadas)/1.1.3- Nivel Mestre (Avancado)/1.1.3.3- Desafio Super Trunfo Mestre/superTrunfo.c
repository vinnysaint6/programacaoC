#include <stdio.h>


int main(){

    // Declaração de variáveis
    char estado1, estado2; 
    char codCarta1[10], codCarta2[10], nomeCidade1[50], nomeCidade2[50];
    int  pTuristico1, pTuristico2; 
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, superPoder1, superPoder2;
    float densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2;

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("---------------->>> DADOS DA 1ª CARTA <<<---------------\n");
    printf("\n");

    // Entrada de Dados Carta 1
    printf("Digite o estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", &codCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto (PIB): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &pTuristico1);

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("---------------->>> DADOS DA 2ª CARTA <<<---------------\n");
    printf("\n");

    // Entrada de Dados Carta 2
    printf("Digite o estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", &codCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto (PIB): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &pTuristico2);
    printf("\n");

    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder Carta 1.
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pTuristico1 + pibPerCapita1 + (1 / densidadePopulacional1);
    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder Carta 2.
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pTuristico2 + pibPerCapita2 + (1 / densidadePopulacional2);
    // Verificação de comparação entre as cartas 1 e 2

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("-------------------->>> CARTA 1 <<<---------------------\n");
    printf("\n");

    // Saída de Dados Carta 1
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pTuristico1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("-------------------->>> CARTA 2 <<<---------------------\n");
    printf("\n");

    // Saída de Dados Carta 2
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n",  pib2);
    printf("Números de Pontos Turísticos: %d\n", pTuristico2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("--------------->>> COMPARAÇÃO DE CARTAS <<<-------------\n");
    printf("\n");

    // Resultado das comparações das cartas
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("Produto Interno Bruto (PIB): Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pTuristico1 > pTuristico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    printf("\n");
    printf("--------------->>> DESAFIO SUPERTRUNFO <<<--------------\n");
    printf("------------------->>> FIM DO JOGO <<<------------------\n");

    return 0;

}