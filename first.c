#include <stdio.h>
#include <string.h>

int main(void)
{
    int num;
    char res[] = " лет", str0[] = " год", str1[] = " года", strStart[] = "Мне ";

    scanf("%d", &num);
    if (!(num % 100 >= 11 && num % 100 <= 19))
    {
        switch (num % 10)
        {
        case 1:
            strcpy(res, str0);
            break;
        case 2:
        case 3:
        case 4:
            strcpy(res, str1);
            break;
        }
    }
    printf("%s%d%s\n", strStart, num, res);

    return 0;
}