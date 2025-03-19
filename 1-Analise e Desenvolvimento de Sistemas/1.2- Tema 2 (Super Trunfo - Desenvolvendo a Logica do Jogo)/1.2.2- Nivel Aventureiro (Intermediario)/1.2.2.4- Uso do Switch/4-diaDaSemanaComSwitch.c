#include <stdio.h>

int main(){
    int dia;

    printf("Digite o valor do dia!\n");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf ("Terça-feira\n");
            break;
        case 4:
            printf ("Quarta-feira\n");
            break;
        case 5:
            printf ("Quinta-feira\n");
            break;
        case 6:
            printf ("Sexta-feira\n");
            break;
        case 7:
            printf ("Sábado\n");
            break;
        default:
            printf("Opção inválida\n");
    }

    /* O switch torna o código mais organizado e fácil de entender. Cada valor da variável 
    dia, é tratado em um case separado, deixando claro o que acontece para cada valor possível. */

}