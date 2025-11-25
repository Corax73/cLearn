#include <stdio.h>

int main(void)
{
    double num0 = 0.0, fact = 1.0, i = 1.0, exp = 1.0;

    scanf("%lf", &num0);

    do
    {
        fact = fact * i;
        exp = exp + 1.0 / fact;
        i++;
    } while (1.0 / fact > num0);
    printf("%1.8lf", exp);
    return 0;
}
