#include <stdio.h>

int main(void)
{
    int num0, num1 = 0, num2 = 1, res= num1 + num2;

    scanf("%d", &num0);
    if (num0 <= 2)
    {
        res = 1;
    }
    else
    {
        for (int i = 2; i < num0; i++)
        {
            num1 = num2;
            num2 = res;
            res = num2 + num1;
        }
    }
    printf("%d\n", res);
    return 0;
}