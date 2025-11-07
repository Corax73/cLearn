#include <stdio.h>

int main(void)
{
    int edge, sideSquare, totalSquare, cubeVolume;
    scanf("%d", &edge);

    sideSquare = edge * edge;
    totalSquare = 6 * sideSquare;
    cubeVolume = edge * edge * edge;
    printf("%d %d %d", sideSquare, totalSquare, cubeVolume);
    return 0;
}