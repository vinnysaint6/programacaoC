#include <stdio.h>

int main(){
    int a = -5;
    int b = 10;

    /*
    O operador || retorna verdadeiro se pelo menos uma das expressões que ele conecta 
    for verdadeira. Se ambas as expressões forem falsas, o resultado será falso.
    */

    if(a > 0 || b > a){
        printf("Pelo menos um dos numeros é positivo.\n");
    }else{
        printf("Os dois numeros são negativo.\n");
    }

    return 0;
}