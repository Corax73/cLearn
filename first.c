#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num0 = 0;
    scanf("%d", &num0);
    printf("%c%c\n", num0 + 64, num0 + 96);
    return 0;
}