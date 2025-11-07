#include <stdio.h>

#define TITLE "|  BMR  |\n"
#define FORMAT "|%6.2f|\n"

int main(void)
{
    int age, height, weight;
    char gender;

    scanf("%c %d %d %d", &gender, &age, &height, &weight);

    switch (gender) {
    case 'f':
        printf(TITLE);
        printf(FORMAT, (double)(10 * weight + 6.25 * height - 5 * age - 161));
        break;
    case 'm':
        printf(TITLE);
        printf(FORMAT, (double)(10 * weight + 6.25 * height - 5 * age + 5));
        break;
    default:
        printf("ERROR!\n");
        break;
    }

    return 0;
}