#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main()

{

    char name[99];

    int l;

    float distance, acc, speed1, w;
    scanf("%s\n%d\n%f\n%f", name, &l, &acc, &w);
    speed1 = sqrt(2 * acc * 1);
    distance = (speed1 * speed1) / 9.805;
    printf("%s will reach a speed of %.2f m/s on a %d ramp crossing %.1f of %.1f  meters,", name, speed1, l, distance, w);

    if (distance < (w - 5.0))
        printf("SPLASH!");
    else if ((distance >= (w - 5.0)) && (distance < w))
        printf("JOVA MADE IT!");
    else
        printf("LIKE A LEGEND!");

    return 0;
}