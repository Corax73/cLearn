#include <math.h>
#include <stdio.h>

int main(void)
{
    float a, b, c, square, halfPerimeter;

    scanf("%f%f%f", &a, &b, &c);
    halfPerimeter = (a + b + c) / 2.0;
    square = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
    printf("%.2f", square);
    return 0;
}