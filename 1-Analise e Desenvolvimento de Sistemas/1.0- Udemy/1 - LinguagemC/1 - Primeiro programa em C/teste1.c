#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d de idade",nome,genero,salario,idade);

    return 0;
}
