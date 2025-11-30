#include <stdio.h>

int main(void)
{
    int num0 = 0;
    double summ = 0, aMean = 0;
    scanf("%d", &num0);

    int arr[num0];

    for (int i = 0; i < num0; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num0; i++)
    {
        summ += arr[i];
    }
    aMean = summ / num0;
    for (int i = 0; i < num0; i++)
    {
        if (arr[i] > aMean)
        {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < num0; i++)
    {
        if (arr[i] <= aMean)
        {
            printf("%d", arr[i]);
            if (i != num0 - 1)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}