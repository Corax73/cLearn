#include <stdio.h>

int main(void)
{
    int num0 = 3, num1 = 5, i = 0, check = 0;
    const char fizz[] = "Fizz", buzz[] = "Buzz";

    for (i = 1; i <= 100; i++)
    {
        check = 0;
        if (i % num0 == 0)
        {
            printf("%s", fizz);
            check = 1;
        }
        if (i % num1 == 0)
        {
            printf("%s", buzz);
            check = 1;
        }
        if (!check)
        {
            printf("%d ", i);
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n ");

    return 0;
}