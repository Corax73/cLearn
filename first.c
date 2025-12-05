#include <stdio.h>

int main(void)
{
    int num0 = 0, num1 = 0;
    long long summ = 0;
    scanf("%d %d", &num0, &num1);

    int arr[num0][num1];

    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = num1 - 1; j >= 0; j--)
    {
        summ = 0;
        for (int i = 0; i < num0; i++)
        {
            summ += arr[i][j];
        }
        printf("%lld ", summ);
    }
    printf("\n");
    return 0;
}