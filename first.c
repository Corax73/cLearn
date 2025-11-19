#include <stdio.h>

int main(void)
{
    int num0 = 0, count = 0;

    scanf("%d", &num0);
    for (int i = 1; i <= num0; i++)
    {
        if (num0 % i == 0)
        {
            count++;
        }
    }
    printf("%d\n", count > 2 ? 0 : 1);
    return 0;
}
