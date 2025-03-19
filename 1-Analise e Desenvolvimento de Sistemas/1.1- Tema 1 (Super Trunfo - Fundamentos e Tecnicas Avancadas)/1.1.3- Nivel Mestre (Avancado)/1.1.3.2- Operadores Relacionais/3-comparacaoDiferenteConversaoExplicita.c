#include <stdio.h>

int main() {
    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);

    /*
    A comparação entre num e result retorna 1, indicando 
    que são iguais  após a conversão explícita de num para float.
    */

    return 0;
}