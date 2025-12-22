#include <stdio.h>

void square(int x, char c)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main()
{
    int num0 = 0;
    char ch;
    scanf("%d %c", &num0, &ch);
    square(num0, ch);
    return 0;
}