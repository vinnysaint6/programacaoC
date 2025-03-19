#include <stdio.h>

int main(){
    int nota1, nota2, nota3, soma;
    float media;

    printf("====>>>> PROGRAMA DE CÁLCULO DE MÉDIA <<<<====\n");

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3; // Conversão explicita: Converte o valor da variavel "Int" para "Float"

    printf("A média do aluno é: %.1f\n", media);

    return 0;
}