#include <stdio.h>

int main(void)
{
    int offset, x1, x2, x3, x4, limit = 26;

    scanf("%d%d%d%d%d", &offset, &x1, &x2, &x3, &x4);
    printf("%d %d %d %d\n", (offset + x1) % limit, (offset + x2) % limit, (offset + x3) % limit, (offset + x4) % limit);
    return 0;
}