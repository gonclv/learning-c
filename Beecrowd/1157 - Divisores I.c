#include <stdio.h>

int main() {
    int n, x = 1;

    scanf("%d", &n);

    while (x <= n) {
        if (n % x == 0)
            printf("%d\n", x);
        x++;
    }

    return 0;
}
