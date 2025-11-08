#include <stdio.h>

int main(void)
{
    const char err[] = "Invalid format";

    int res = 0;
    char char0, char1, char2;

    scanf("%c%c%c", &char0, &char1, &char2);
    switch ((int)char0)
    {
    case 114:
        res += 4;
        break;
    case 45:
        break;
    default:
        printf("%s\n", err);
        return 0;
        break;
    }

    switch ((int)char1)
    {
    case 119:
        res += 2;
        break;
    case 45:
        break;
    default:
        printf("%s\n", err);
        return 0;
        break;
    }

    switch ((int)char2)
    {
    case 120:
        res += 1;
        break;
    case 45:
        break;
    default:
        printf("%s\n", err);
        return 0;
        break;
    }
    printf("%d\n", res);

    return 0;
}