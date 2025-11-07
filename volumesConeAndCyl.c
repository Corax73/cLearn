#include <stdio.h>

int main(void)
{
    int r, h;
    double vCul, vCone, pi = 3.14159265358979323846;
    scanf("%d%d", &r, &h);

    vCul = pi * r * r * h;
    vCone = (pi * r * r * h) / 3.00;
    printf("%.2f %.2f", vCul, vCone);
    return 0;
}