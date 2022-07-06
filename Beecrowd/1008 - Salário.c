#include <stdio.h>
 
void main() {
    int numFuncionario, horasTrabalhadas;
    float valorPorHora, salario;
    scanf("%d", &numFuncionario);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", &valorPorHora);

    salario = horasTrabalhadas * valorPorHora;
    printf("NUMBER = %d\n", numFuncionario);
    printf("SALARY = U$ %.2f\n", salario);
}
