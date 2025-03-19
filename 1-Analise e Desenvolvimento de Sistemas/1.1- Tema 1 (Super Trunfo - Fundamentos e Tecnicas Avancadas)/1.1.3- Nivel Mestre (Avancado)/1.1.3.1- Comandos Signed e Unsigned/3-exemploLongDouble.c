#include <stdio.h>
 
int main() {
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21lf\n", veryPreciseNumber);

    // Obs: O resultado de Long Double pode não funcionar dependendo do ambiente: Windows/ IDE/ Compilador. Verificar no ambiente Linux.
 
    return 0;
}