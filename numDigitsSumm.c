#include <stdio.h>

int main(void)
{
   int input, first, second, third, result;

   scanf("%d", &input);
   if (input < 100) {
       return 0;
   } else {
       first = input / 100;
       second = (input % 100) / 10;
       third = (input % 100) % 10;
       result = first + second + third;
       printf("%d\n", result);
    }
    return 0;
}