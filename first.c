#include <stdio.h>

int main(void)
{
    int num0 = 0, num1 = 0, num2 = 0, num3 = 0;

    scanf("%d%d%d%d", &num0, &num1, &num2, &num3);

    if (num3 > 0)
    {
        printf("%d %d %d\n", 1, 1, 1);
        return 0;
    }
    if (num3 < 0)
    {
        printf("%d %d %d\n", 0, 0, 0);
        return 0;
    }
    printf("%d %d %d\n", num0, num1, num2);
    return 0;
}