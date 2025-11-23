#include <stdio.h>

int main(void)
{
    long num0 = 0;
    int num1 = 0, num2 = 10;

    scanf("%ld", &num0);
    num1 = num0 % num2;

    if (num1 == num0)
    {
        printf("%ld\n", num0);
        return 0;
    }
    printf("%d", num1);
    num2 *= 10;
    while (num1 != num0)
    {
        num1 = num0 % num2;
        printf("%d", num1 / (num2 > 10 ? (num2 / 10) : num2));
        num2 *= 10;
    }
    return 0;
}
