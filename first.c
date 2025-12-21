#include <stdio.h>

int main(void)
{
    int num0 = 0, num1 = 0, num2 = 0, isFoul0 = 0, isFoul1 = 0, countWin0 = 0, countWin1 = 0, summ0 = 0, summ1 = 0, max = 500;
    char foulStr[] = "foul play ";
    scanf("%d", &num0);

    for (int i = 0; i < num0; i++)
    {
        scanf("%d %d", &num1, &num2);
        summ0 += num1;
        summ1 += num2;
        if (summ0 > max || num1 < 0)
        {
            isFoul0 = 1;
        }
        if (summ1 > max || num2 < 0)
        {
            isFoul1 = 1;
        }
        if (num1 > num2)
        {
            countWin0++;
        }
        else if (num2 > num1)
        {
            countWin1++;
        }
    }

    if (isFoul0 || isFoul1)
    {
        if (isFoul0)
        {
            printf("%s1\n", foulStr);
        }
        if (isFoul1)
        {
            printf("%s2\n", foulStr);
        }
    }
    else
    {
        if (countWin0 > countWin1)
        {
            printf("1\n");
        }
        else if (countWin1 > countWin0)
        {
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
