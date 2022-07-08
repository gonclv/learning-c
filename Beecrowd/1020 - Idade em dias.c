#include <stdio.h>

void main() {
    int idade, anos, meses, dias;
    scanf("%d", &idade);

    anos = 0;
    meses = 0;
    dias = 0;

    if (idade < 30) {
        dias = idade;
    }
    else if (idade < 365) {
        meses = idade / 30;
        dias = idade % 30;
    }
    else {
        anos = idade / 365;
        meses = (idade % 365) / 30;
        dias = (idade % 365) % 30;
    }

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}
