#include <stdio.h>

int main(void)
{
    int num0 = 0, num1 = 0, count = 1, top = 0, left = 0;
    scanf("%d %d", &num0, &num1);

    int arr[num0][num1];

    int bottom = num0 - 1;
    int right = num1 - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            arr[top][i] = count++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            arr[i][right] = count++;
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                arr[bottom][i] = count++;
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                arr[i][left] = count++;
            }
            left++;
        }
    }

    for (int i = 0; i < num0; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}