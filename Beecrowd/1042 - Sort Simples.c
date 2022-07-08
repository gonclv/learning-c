#include <stdio.h>
 
int main() {
    int A, B, C, menor, medio, maior;
    scanf("%d %d %d", &A, &B, &C);
    
    if ((A > B) && (B > C)) {
        maior = A;
        medio = B;
        menor = C;
    }
    else if ((A > C) && (C > B)) {
        maior = A;
        medio = C;
        menor = B;
    }
    else if ((B > C) && (C > A)) {
        maior = B;
        medio = C;
        menor = A;
    }
    else if ((B > A) && (A > C)) {
        maior = B;
        medio = A;
        menor = C;
    }
    else if ((A > B) && (C > A)) {
        maior = C;
        medio = A;
        menor = B;
    }
    else {
        maior = C;
        medio = B;
        menor = A;
    }
    
    printf("%d\n%d\n%d\n\n", menor, medio, maior);
    printf("%d\n%d\n%d\n", A, B, C);
    
    return 0;
}
