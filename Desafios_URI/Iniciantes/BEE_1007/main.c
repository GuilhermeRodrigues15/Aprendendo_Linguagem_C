#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, produtoAB, produtoCD, diferenca;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    produtoAB = a * b;
    produtoCD = c * d;
    diferenca = produtoAB - produtoCD;

    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}
