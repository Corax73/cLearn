#include <stdio.h>
#include <math.h>

int main(void)
{
    int num0, num1, num2, num3, distance1, distance2;

    scanf("%d%d%d%d", &num0, &num1, &num2, &num3);
    distance1 = sqrt(pow(num0, 2) + pow(num1, 2));
    distance2 = sqrt(pow(num2, 2) + pow(num3, 2));
    if (distance1 < distance2)
    {
        printf("1\n");
    }
    else if (distance2 < distance1)
    {
        printf("2\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}