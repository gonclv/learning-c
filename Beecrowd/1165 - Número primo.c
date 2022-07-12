#include <stdio.h>

int main() {
    int N, X, i, divisor, cont = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &X);

        for (divisor = X; divisor > 0; divisor--) {
            if ((X % divisor) == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            printf("%d eh primo\n", X);
        }
        else {
            printf("%d nao eh primo\n", X);
        }

        cont = 0;
    }

    return 0;
}
