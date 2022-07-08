#include <stdio.h>
 
int main() {
    int N, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    scanf("%d", &N);

    notas100 = 0;
    notas50 = 0;
    notas20 = 0;
    notas10 = 0;
    notas5 = 0;
    notas2 = 0;
    notas1 = 0;

    if (N <= 1) {
        notas1 = N;
    }
    else if (N < 5) {
        notas2 = N / 2;
        notas1 = N % 2;
    }
    else if (N < 10) {
        notas5 = N / 5;
        notas2 = (N % 5) / 2;
        notas1 = (N % 5) % 2;
    }
    else if (N < 20) {
        notas10 = N / 10;
        notas5 = (N % 10) / 5;
        notas2 = ((N % 10) % 5) / 2;
        notas1 = ((N % 10) % 5) % 2;
    }
    else if (N < 50) {
        notas20 = N / 20;
        notas10 = (N % 20) / 10;
        notas5 = ((N % 20) % 10) / 5;
        notas2 = (((N % 20) % 10) % 5) / 2;
        notas1 = (((N % 20) % 10) % 5) % 2;
    }
    else if (N < 100) {
        notas50 = N / 50;
        notas20 = (N % 50) / 20;
        notas10 = ((N % 50) % 20) / 10;
        notas5 = (((N % 50) % 20) % 10) / 5;
        notas2 = ((((N % 50) % 20) % 10) % 5) / 2;
        notas1 = ((((N % 50) % 20) % 10) % 5) % 2;
    }
    else {
        notas100 = N / 100;
        notas50 = (N % 100) / 50;
        notas20 = ((N % 100) % 50) / 20;
        notas10 = (((N % 100) % 50) % 20) / 10;
        notas5 = ((((N % 100) % 50) % 20) % 10) / 5;
        notas2 = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
        notas1 = (((((N % 100) % 50) % 20) % 10) % 5) % 2;
    }

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);
    
    return 0;
}
