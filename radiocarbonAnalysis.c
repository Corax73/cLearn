#include <math.h>
#include <stdio.h>

int main(void)
{
    int num, divider = 1000000000;
    double n = 7.5 * pow(10, 10), t = 5570;

    scanf("%d", &num);
    printf("%.2lf\n", (n * pow(exp(1), -(log(2) / t) * num)) / divider);

    return 0;
}