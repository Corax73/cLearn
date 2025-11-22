#include <stdio.h>
#include <math.h>

int main(void)
{
    long num0 = 0, num1 = 0;
    int num2 = 1, num3 = 2;

    scanf("%ld", &num0);
    num1 = pow(num3, num2);
    if (num1 > num0)
    {
        return 0;
    }
    while (num1 <= num0)
    {
        num1 = pow(num3, num2);
        if (num1 >= num0)
        {
            if (num1 == num0)
            {
                printf("%d ", num2);
            }
            break;
        }
        printf("%d ", num2);
        num2++;
    }
    return 0;
}
