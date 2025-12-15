#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int size = 54, startIndex = 0, offset = -1;
    char str[size];

    fgets(str, size, stdin);
    for (int i = 0; i < size; i++)
    {
        if ((str[i] == '\\' && str[i + 1] == 'n') || str[i] == '\n' || str[i] == '\0')
        {
            break;
        }
        offset = -1;
        if (str[i] == ' ')
        {
            startIndex = i + 1;
        }
        if (i == startIndex)
        {
            for (int j = startIndex; j < size; j++)
            {
                if (str[j] == ' ' || (str[j] == '\\' && str[j + 1] == 'n') || str[j] == '\n' || str[j] == '\0')
                {
                    break;
                }
                offset++;
            }
            if (str[startIndex] == str[startIndex + offset])
            {
                for (int k = startIndex; k <= startIndex + offset; k++)
                {
                    printf("%c", str[k]);
                }
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}