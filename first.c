#include <stdio.h>

int main(void)
{
    long long num0 = 0, num1 = 0, num2 = 0, i = 0;

    scanf("%lld", &num0);
    scanf("%lld", &num1);
    num2 = num1;
    printf("%lld ", num2);
    for (i = 1; i < num0; i++)
    {
        scanf("%lld", &num1);
        if (num2 != num1)
        {
            num2 = num1;
            if (i == num0 - 1)
            {
                printf("%lld", num2);
            }
            else
            {
                printf("%lld ", num2);
            }
        }
    }

    return 0;
}