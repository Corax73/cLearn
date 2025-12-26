#include <stdio.h>

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(void)
{
    int num0 = 0, num1 = 0;
    scanf("%d %d", &num0, &num1);
    printf("%d\n", gcd(num0, num1));
    return 0;
}
