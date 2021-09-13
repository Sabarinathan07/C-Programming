#include <stdio.h>
int main()
{
    int x = 4, y = 5;
    int *p = &x, *q = &y;

    printf("%d", *p);
    printf("%d", *q);
    *p = *q;
    printf("\n%d\n%p\n", *p,p);
    printf("%d\n%p\n", *q,q);
    int i = 3;
    int *ip = &i;
    int *qp = &ip;
    printf("%p", qp);
}
