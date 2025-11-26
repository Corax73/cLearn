#include <stdio.h>

int main(void)
{
    long long num0 = 0, num1 = 0, num2 = 0, greatestCommonDivisor = 0;

    scanf("%lld %lld", &num0, &num1);
    if (num1 > num0)
    {
        num2 = num0;
        num0 = num1;
        num1 = num2;
    }
    num2 = num0;
    while (1)
    {
        if (num2 % num0 == 0 && num2 % num1 == 0)
        {
            greatestCommonDivisor = num2;
            break;
        }
        num2++;
    }
    printf("%lld\n", greatestCommonDivisor);

    return 0;
}