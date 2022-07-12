#include <stdio.h>

int main() {
    int N, X, i, divisor, somaDivisores = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &X);

        for (divisor = X - 1; divisor > 0; divisor--) {
            if ((X % divisor) == 0) {
                somaDivisores = somaDivisores + divisor;
            }
        }

        if (somaDivisores == X) {
            printf("%d eh perfeito\n", X);
        }
        else {
            printf("%d nao eh perfeito\n", X);
        }

        somaDivisores = 0;
    }

    return 0;
}
