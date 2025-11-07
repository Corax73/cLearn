#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b, y, area, angleByRad, pi = 3.141593, denominator = 180.0;

    scanf("%lf%lf%lf", &a, &b, &y);

    angleByRad = y * pi / denominator;
    area = (a * b * sin(angleByRad)) / 2.0;
    printf("%.2f", area);
    return 0;
}