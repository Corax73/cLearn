#include <stdio.h>

int main(void)
{
    int num0 = 0, j = 0;
    scanf("%d", &num0);

    for (int i = 1; i <= num0; i++)
    {
        printf("%d ", i);
        j = i;
        if (j == 1)
        {
            j += 1;
            for (j; j <= num0; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            j -= 1;
            for (j; j > 1; j--)
            {
                printf("%d ", j);
            }
            for (j; j <= num0 - i; j++)
            {
                printf("%d ", j);
            }
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}