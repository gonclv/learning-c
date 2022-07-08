#include <stdio.h>
 
int main() {
    int N, horas, minutos, segundos;
    scanf("%d", &N);

    if (N < 60) {
        horas = 0;
        minutos = 0;
        segundos = N;
    }
    else if (N < 3600) {
        horas = 0;
        minutos = N / 60;
        segundos = N % 60;
    }
    else {
        horas = N / 3600;
        minutos = (N % 3600) / 60;
        segundos = (N % 3600) % 60;
    }

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
