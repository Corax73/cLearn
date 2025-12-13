#include <stdio.h>

int main(void)
{
    int size = 104, endIndex = 0;
    char str[size];

    fgets(str, size, stdin);
    for (int i = 0; i < size; i++)
    {
        if ((str[i] == '\\' && str[i + 1] == 'n') || str[i] == '\n' || str[i] == '\0')
        {
            endIndex = i - 1;
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if ((str[i] == '\\' && str[i + 1] == 'n') || str[i] == '\n' || str[i] == '\0')
        {
            break;
        }
        printf("%c", str[i]);
        if ((endIndex - i) % 3 == 0)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}