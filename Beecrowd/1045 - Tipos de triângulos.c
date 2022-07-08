#include <stdio.h>

int main() {
    double A, B, C, ladoMaior, lado1, lado2;
    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A >= B) && (A >= C)) {
        ladoMaior = A;
        lado1 = B;
        lado2 = C;
    }
    else if ((B >= A) && (B >= C)) {
        ladoMaior = B;
        lado1 = A;
        lado2 = C;
    }
    else {
        ladoMaior = C;
        lado1 = A;
        lado2 = B;
    }

    if (ladoMaior >= lado1 + lado2) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
        if (ladoMaior * ladoMaior == lado1 * lado1 + lado2 * lado2) {
            printf("TRIANGULO RETANGULO\n");
        }
        else if (ladoMaior * ladoMaior > lado1 * lado1 + lado2 * lado2) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if ((ladoMaior == lado1) || (ladoMaior == lado2) || (lado1 == lado2)) {
            if ((ladoMaior == lado1) && (ladoMaior == lado2)) {
                printf("TRIANGULO EQUILATERO\n");
            }
            else {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }

    return 0;
}
