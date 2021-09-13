#include <stdio.h>
int main()
{
    int a, b, *p1, *p2;
    a = 10;
    b = 5;
    p1 = &a;
    p2 = &b;
    printf("Address of a = %p\n", p1);
    printf("Address of b = %p\n", p2);
    printf("\n");
    printf("Sum = %d\n", *p1 + *p2);
    printf("Difference = %d\n", *p1 - *p2);
    printf("Product = %d\n", *p1 * *p2);
    printf("Division = %d\n", *p1 / *p2);
}
