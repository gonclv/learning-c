#include <stdio.h>
 
int main() {
    double N;
    int notas100, notas50, notas20, notas10, notas5, notas2, moedas1Real, moedas50, moedas25, moedas10, moedas5, moedas1, centavos;
    scanf("%lf", &N);

    notas100 = N / 100;
    notas50 = ((int)N % 100) / 50;
    notas20 = (((int)N % 100) % 50) / 20;
    notas10 = ((((int)N % 100) % 50) % 20) / 10;
    notas5 = (((((int)N % 100) % 50) % 20) % 10) / 5;
    notas2 = ((((((int)N % 100) % 50) % 20) % 10) % 5) / 2;
    moedas1Real = ((((((int)N % 100) % 50) % 20) % 10) % 5) % 2;

    centavos = (N - notas100 * 100 - notas50 * 50 - notas20 * 20 - notas10 * 10 - notas5 * 5 - notas2 * 2 - moedas1Real) * 100;

    moedas50 = centavos / 50;
    moedas25 = (centavos % 50) / 25;
    moedas10 = ((centavos % 50) % 25) / 10;
    moedas5 = (((centavos % 50) % 25) % 10) / 5;
    moedas1 = (((centavos % 50) % 25) % 10) % 5;
 	
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1Real);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1);

    return 0;
}
