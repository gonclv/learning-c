#include <stdio.h>

int main() {
    int codigoPeca1, numPecas1, codigoPeca2, numPecas2;
    float valorPeca1, valorPeca2, valorTotal;
    scanf("%d%d%f", &codigoPeca1, &numPecas1, &valorPeca1);
    scanf("%d%d%f", &codigoPeca2, &numPecas2, &valorPeca2);

    valorTotal = numPecas1 * valorPeca1 + numPecas2 * valorPeca2;
    
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
    return 0;
}
