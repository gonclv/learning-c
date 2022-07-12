#include <stdio.h>

int main() {
    int t, cont = 0, pa, pb, crescA, crescB, ano = 0;
    double g1, g2;

    scanf("%d", &t);

    while (cont < t) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        do {
            crescA = pa * (g1 / 100);
            crescB = pb * (g2 / 100);

            pa = pa + crescA;
            pb = pb + crescB;
            ano++;
        } while (pa <= pb);

        if (ano > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", ano);
        
        cont++;
        ano = 0;
    }

    return 0;
}
