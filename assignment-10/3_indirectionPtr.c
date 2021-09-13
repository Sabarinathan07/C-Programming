#include <stdio.h>  

int main()
{
    int n = 10;

    int *ptr = &n;

    int q = *ptr;

    int z = *&n;

    printf("Value of n = %d\n",n);
    printf("Value of q (*ptr) = %d\n",q);
    printf("Value of z (*&n) = %d\n",z);

    return 0;
}