#include <stdio.h>

int main(void)
{
    int num0 = 0, temp = 0, index = 0;
    long long k = 0, offset = 0;
    scanf("%d", &num0);

    int arr0[num0][num0];
    int arr1[num0][num0];

    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num0; j++)
        {
            scanf("%d", &arr0[i][j]);
        }
    }
    scanf("%lld", &k);
    if (k > num0)
    {
        offset = k % num0;
    }
    else
    {
        offset = k;
    }
    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num0; j++)
        {
            index = j + offset;
            if (index > num0 - 1)
            {
                index = index % num0;
            }
            arr1[i][index] = arr0[i][j];
        }
    }
    for (int i = 0; i < num0; i++)
    {

        for (int j = 0; j < num0; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}