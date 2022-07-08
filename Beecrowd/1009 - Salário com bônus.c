#include <stdio.h>
 
int main() {
    double salarioFixo, totalVendas, salarioTotal;
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);
    
    salarioTotal = salarioFixo + 0.15 * totalVendas;
    printf("TOTAL = R$ %.2lf\n", salarioTotal);
    return 0;
}
