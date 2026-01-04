#include <stdio.h>
#include "libtest.h"

int main() {
    char str[] = "string";
    int count = 1;
    printf("count0= %d\n", count);
    printf("Result %d\n", stringStat(str, 3, &count));
    printf("count1= %d\n", count);
    return 0;
}