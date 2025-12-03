#include <stdio.h>

int main(void)
{
    int num0 = 0, num1 = 0;
    scanf("%d %d", &num0, &num1);

    int arr[num0][num1];

    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            printf("%d", arr[i][j]);
            if (j != num1 - 1)
            {
                printf(" ");
            }
            if (j == num1 - 1)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}