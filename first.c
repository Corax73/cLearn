#include <stdio.h>

int binary_search(int arr[], int n, int arg)
{
    int l_wall = 0, r_wall = n - 1, res = -1;

    while (l_wall < r_wall)
    {
        int mid = (r_wall + l_wall) / 2;
        if (arg == arr[mid])
        {
            res = mid;
            break;
        }
        else if (arg == arr[l_wall])
        {
            res = l_wall;
            break;
        }
        else if (arg == arr[r_wall])
        {
            res = r_wall;
            break;
        }
        else if (arg < arr[mid])
        {
            r_wall = mid - 1;
        }
        else
        {
            l_wall = mid + 1;
        }
    }
    return res;
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
    num1 = binary_search(arr, num0, num1);
    printf("%d\n", num1);
    return 0;
}
