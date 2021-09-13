#include <stdio.h>
int main()
{
    int a, b;
    printf(" Enter any two numbers : ");
    scanf("%d %d", &a, &b);
    int add, sub, multi, div, mod;
    add = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;
    mod = a % b;
    printf("add of two numbers a, b is : %d\n", add);
    printf("sub of two numbers a, b is : %d\n", sub);
    printf("multi of two numbers a, b is : %d\n", multi);
    printf("div of two numbers a, b is : %d\n", div);
    printf("mod of two numbers a, b is : %d\n\n", mod);
}