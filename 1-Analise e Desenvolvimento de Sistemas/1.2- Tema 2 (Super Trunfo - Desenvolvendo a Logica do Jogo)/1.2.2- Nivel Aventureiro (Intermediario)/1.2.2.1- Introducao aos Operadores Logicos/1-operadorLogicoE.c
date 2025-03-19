#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;

    /*
    O operador && retorna verdadeiro se e somente se ambas as expressões que ele conecta 
    forem verdadeiras. Se qualquer uma das expressões for falsa, o resultado será falso.
    */
   
    if(a > 0 && b > a){
        printf("Os dois numeros são positivos!\n");
    }else{
        printf("Pelo menos um dos numeros é negativo!\n");
    }

    return 0;
}