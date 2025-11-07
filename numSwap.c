#include <stdio.h>

int main()
{
    int num, first, second, result;

    scanf("%d", &num);

    if (num < 10) {
        result = num * 10;
        printf("%d\n", result);
    } else {
        first = num / 10;
        second = num % 10;
        result = second * 10 + first;
        printf("%02d\n", result);
    }

    return 0;
}