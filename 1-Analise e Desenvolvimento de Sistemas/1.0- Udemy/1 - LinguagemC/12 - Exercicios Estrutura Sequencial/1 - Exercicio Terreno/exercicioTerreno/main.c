#include <stdio.h>

int main(){

    double largura, comprimento, metroQuadrado, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf",&largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf",&comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf",&metroQuadrado);

    area = largura * comprimento;
    preco = area * metroQuadrado;

    printf("Area do terreno = %.2lf\n",area);
    printf("\nPreco do terreno = %.2lf\n",preco);

    return 0;
}
