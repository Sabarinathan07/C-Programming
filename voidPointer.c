#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 10;
    void *ptr = &x;
    int *nulptr = NULL;
    // printf("%d", *(int *)ptr);
    printf("%phelo", nulptr);
    int a = 10,b=20;
    // int *ptr;
    ptr = (int *)malloc(2 * sizeof(int));
    ptr = &a;
    if (ptr == NULL)
    {
        printf("Memoru could not be allocated");
    }
    else
    {
        printf("Memoru allocated\n");
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    free(ptr);
    ptr = &b;
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    }
}
