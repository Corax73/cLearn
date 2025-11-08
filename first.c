#include <stdio.h>

int main(void)
{
    int num, k, first, second, third, fourth, result;

    scanf("%d%d", &k, &num);
    switch (k)
    {
    case 1:
        result = num;
        break;
    case 2:
        first = num / 10;
        second = num % 10;
        result = first * second;
        break;
    case 3:
        first = num / 100;
        second = (num % 100) / 10;
        third = (num % 10) % 10;
        result = first * second * third;
        break;
    case 4:
        first = num / 1000;
        second = (num % 1000) / 100;
        third = (num % 100) / 10;
        fourth = num % 10;
        result = first * second * third * fourth;
        break;
    }
    printf("%d\n", result);

    return 0;
}