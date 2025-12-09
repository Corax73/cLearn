#include <stdio.h>

int main(void)
{
    char str[30];
    fgets(str, 30, stdin);
    int i = 0, count = 0;
    while (str[i])
    {
        if (str[i] != '\n' && str[i] != '\0')
        {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}