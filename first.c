#include <stdio.h>

int main(void)
{
    int num0 = 0, num1 = 0, x = 0, y = 0;
    char str;
    scanf("%d", &num0);
    for (int i = 0; i < num0; i++)
    {
        scanf("\n%c%*s %d", &str, &num1);
        if (str == 'N')
        {
            y += num1;
        }
        else if (str == 'S')
        {
            y -= num1;
        }
        else if (str == 'W')
        {
            x -= num1;
        }
        else if (str == 'E')
        {
            x += num1;
        }
    }
    printf("%d %d\n", x, y);
    return 0;
}