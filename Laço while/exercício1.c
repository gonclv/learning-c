#include <stdio.h>

void main() {
    int numero = 1000;
    while (numero < 2000) {
        if (numero % 11 == 5) {
            printf("%d\n", numero);
        }
        numero++;
    }
}
