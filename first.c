#include <stdio.h>

int main(void)
{
    int num0 = 0, max = 0, min = 0;

    scanf("%d", &num0);
    min = num0;
    max = num0;
    while (num0 != 0)
    {
        if (max < num0)
        {
            max = num0;
        }
        if (min > num0)
        {
            min = num0;
        }
        scanf("%d", &num0);
    }
    printf("%d %d", max, min);
    return 0;
}
