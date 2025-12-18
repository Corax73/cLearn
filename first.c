#include <stdio.h>

int factorial(int start)
{
    int res = 1;
    for (int i = 1; i <= start; i++)
    {
        res *= i;
    }
    return res;
}

int combin(int n, int k)
{
    return factorial(n) / (factorial(k) * (factorial(n - k)));
}

int main(void)
{
    int n = 0, k = 0;
    scanf("%d%d", &n, &k);

    printf("%d\n", combin(n, k));

    return 0;
}
