#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomeFunc;
    double salario, valorVendas, comissao, total;

    scanf("%s", &nomeFunc);
    scanf("%lf", &salario);
    scanf("%lf", &valorVendas);

    comissao = (valorVendas * 15) / 100;
    total = salario + comissao;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
