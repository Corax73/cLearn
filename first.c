#include <stdio.h>

int main(void)
{
    int num0, num1;

    scanf("%d%d", &num0, &num1);

    for (int i = num1; i >= num0; i--)
    {
        printf("%d%s", i, (i > (num0) ? " " : ""));
    }

    printf("\n");
    return 0;
}