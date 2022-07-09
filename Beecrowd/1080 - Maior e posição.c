#include <stdio.h>

int main() {
    int X, maiorValorX = -1, posicaoX, cont;

    for (cont = 1; cont <= 10; cont++) {
        scanf("%d", &X);

        if (X > maiorValorX) {
            maiorValorX = X;
            posicaoX = cont;
        }
    }

    printf("%d\n", maiorValorX);
    printf("%d\n", posicaoX);

    return 0;
}
