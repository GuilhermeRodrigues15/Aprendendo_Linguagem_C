#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double area = 0, raio = 0, n = 3.14159;
    scanf("%lf", &raio);
    area = (raio * raio) * n;
    printf("A=%.4lf\n", area);

    return 0;
}
