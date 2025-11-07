#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *str_repeat(char str[], unsigned int times)
{
    if (times < 1)
        return NULL;

    char *result;
    size_t str_len = strlen(str);
    result = malloc(sizeof(char) * str_len * times + 1);

    while (times--)
    {
        strcat(result, str);
    }
    return result;
}

int main(void)
{
    short mainStrLength = 49;
    short subStrLength = 41;
    short starsStrLength = 8;
    char *mainStr = str_repeat("_", mainStrLength);
    char *subStr = str_repeat("_", subStrLength);
    char *starsStr = str_repeat("*", starsStrLength);
    for (int i = 0; i < 13; i++)
    {
        switch (i)
        {
        case 0:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            printf("%s\n", mainStr);
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("%s", starsStr);
            printf("%s\n", subStr);
            break;
        }
    }
    return 0;
}
