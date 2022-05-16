#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroFunc, horasTrab;
    double valorHora, salario;

    scanf("%d", &numeroFunc);
    scanf("%d", &horasTrab);
    scanf("%lf", &valorHora);

    salario = horasTrab * valorHora;

    printf("NUMBER = %d\n", numeroFunc);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
