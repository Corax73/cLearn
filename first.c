#include <stdio.h>

int main(void)
{
    int base_damage, armor_class, is_critical;
    double defender_health, res;

    scanf("%d%lf%d%d", &base_damage, &defender_health, &armor_class, &is_critical);

    res = base_damage * (is_critical ? 2 : 1);
    res = res - (armor_class > 0 ? res * armor_class / 10 : 0);
    printf("%.2f\n", res);
    if (res > defender_health)
    {
        printf("You win!\n");
    }

    return 0;
}