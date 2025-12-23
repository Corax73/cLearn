#include <stdio.h>

int is_prime(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return 1;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
}
int main()
{
    int num0 = 0;
    scanf("%d", &num0);
    printf("%d\n", is_prime(num0));
    return 0;
}
