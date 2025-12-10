#include <stdio.h>

int main(void)
{
    int index = -1;
    char ch;
    char str[104];

    scanf("%c ", &ch);
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < sizeof(str); i++)
    {
        if ((str[i] == '\\' && str[i + 1] == 'n') || str[i] == '\n' || str[i] == '\0')
        {
            break;
        }
        if (str[i] == ch)
        {
            index = i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}