#include <stdio.h>
int main()
{
    printf("%d ", 1);
    goto l1;
    printf("%d ", 2);
l1:
    goto l2;
    printf("%d ", 3);
l2:
    printf("%d ", 4);
}