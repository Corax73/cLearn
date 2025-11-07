#include <stdio.h>

int main(void)
{
    int day, month, count;

    scanf("%d%d", &month, &day);
    for (int i = 1; i < month; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            count = 31;
            break;
        case 2:
            count = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            count = 30;
            break;
        }
        day += count;
    }
    printf("%d\n", day);

    return 0;
}