#include <stdio.h>

void sum_digits(int *x)
{
    int num1 = 0, num2 = 10, summ = 0;
    num1 = *x % num2;
    summ += num1;
    num2 *= 10;
    if (num1 != *x)
    {
        while (num1 != *x)
        {
            num1 = *x % num2;
            summ += num1 / (num2 / 10);
            num2 *= 10;
        }
        *x = summ;
    }
}

int main(void)
{
    int num0 = 0;
    scanf("%d", &num0);
    int *x = &num0;
    sum_digits(x);
    printf("summ=%d\n", *x);
    return 0;
}
