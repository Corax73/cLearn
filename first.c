#include <stdio.h>

int main(void)
{
    int size = 54, offset = 97, isMatched = 1;
    int arr0[26] = {0}, arr1[26] = {0};
    char str0[size], str1[size], yes[] = "yes", no[] = "no";
    scanf("%[^\n]%*c", str0);
    scanf("%[^\n]%*c", str1);

    for (int i = 0; i < size; i++)
    {
        if ((str0[i] == '\\' && str0[i + 1] == 'n') || str0[i] == '\n' || str0[i] == '\0')
        {
            break;
        }
        arr0[str0[i] - offset]++;
    }

    for (int i = 0; i < size; i++)
    {
        if ((str1[i] == '\\' && str1[i + 1] == 'n') || str1[i] == '\n' || str1[i] == '\0')
        {
            break;
        }
        arr1[str1[i] - offset]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr0[i] < arr1[i])
        {
            isMatched = 0;
            break;
        }
    }

    if (isMatched)
    {
        printf("%s\n", yes);
    }
    else
    {
        printf("%s\n", no);
    }
    return 0;
}