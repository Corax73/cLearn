#include <stdio.h>

void sort_arr(int arr[], int n, int fl)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (fl)
            {
                if (arr[j] > arr[index])
                {
                    index = j;
                }
            }
            else
            {
                if (arr[j] < arr[index])
                {
                    index = j;
                }
            }
        }
        if (index != i)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}

int main(void)
{
    int num0 = 0, num1 = 0;
    scanf("%d", &num0);
    int arr[num0];

    for (int i = 0; i < num0; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num1);
    sort_arr(arr, num0, num1);
    for (int i = 0; i < num0; i++)
    {
        printf("%d", arr[i]);
        if (i != num0 - 1)
        {
            printf(" ");
        }
        if (i == num0 - 1)
        {
            printf("\n");
        }
    }
    return 0;
}
