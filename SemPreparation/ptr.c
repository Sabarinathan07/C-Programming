#include <stdio.h>

int main (void)

{
    int x = 5;

    int p;

    int buf[10] = {1, 2, 3, 4, 5, 6, 9, 8};

    p = (buf + 1)[0];

    // printf("%h", p);

    printf("%d %-5 x", x);

    return 0;
    }