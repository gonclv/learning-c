#include <stdio.h>

int main() {
    int N, cont, num1 = 0, num2 = 1, aux;

    scanf("%d", &N);

    for (cont = 0; cont < N - 1; cont++) {
        printf("%d ", num1);
        aux = num1;
        num1 = num2;
        num2 = num2 + aux;
    }

    printf("%d\n", num1);
    return 0;
}
