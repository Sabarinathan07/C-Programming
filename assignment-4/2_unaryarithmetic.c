#include <stdio.h>
 int main()
{
    int a = 10, b = 4, res;
 
    printf("a is %d and b is %d\n", a, b);
 
    res = a + b; 
    printf("a+b is %d\n", res);
 
    res = a - b; 
    printf("a-b is %d\n", res);
 
    res = a * b; 
    printf("a*b is %d\n", res);
 
    res = a / b; 
    printf("a/b is %d\n", res);
 
    res = a % b; 
    printf("a%%b is %d\n\n", res);

    return 0;
}