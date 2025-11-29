#include <stdio.h>

int main(void)
{
    int num0 = 0, check = 1;
    scanf("%d", &num0);

    int arr[num0];

    for (int i = 0; i < num0; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num0; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < num0; i++)
    {
        if (arr[i] % 2)
        {
            printf("%d", arr[i]);
            if (i < num0 - 1)
            {
                printf(" ");
            }
        }
    }
    return 0;
}