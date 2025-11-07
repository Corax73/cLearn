#include <locale.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int num0, num1;
    char action;
    scanf("%d %c %d", &num0, &action, &num1);

    if (num1 == 0 && (action == '/' || action == ':'))
    {
        printf("ERROR!\n");
        return 0;
    }

    switch (action)
    {
    case '+':
        printf("%.2f\n", (double)num0 + num1);
        break;
    case '-':
        printf("%.2f\n", (double)num0 - num1);
        break;
    case 'x':
    case '*':
        printf("%.2f\n", (double)num0 * num1);
        break;
    case ':':
    case '/':
        printf("%.2f\n", (double)num0 / num1);
        break;
    case '^':
        printf("%.2f\n", (double)pow(num0, num1));
        break;
    default:
        printf("ERROR!\n");
        break;
    }

    return 0;
}