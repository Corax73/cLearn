#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int size = 54;
    char city0[size], city1[size], yes[] = "yes", no[] = "no";
    scanf("%s", city0);
    scanf("%s", city1);

    if (city0[strlen(city0) - 1] == tolower(city1[0]) || city1[strlen(city1) - 1] == tolower(city0[0]))
    {
        printf("%s\n", yes);
    }
    else
    {
        printf("%s\n", no);
    }
    return 0;
}