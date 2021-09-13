#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int o[2000], ol = 0, e[2000], el = 0, n, t;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &t);
        if (t % 2)
            o[ol++] = t;
        else
            e[el++] = t;
    }
    qsort(o, ol, sizeof(int), cmp);
    qsort(e, el, sizeof(int), cmp);
    while (ol && el)
    {
        // printf("%d", ol);
        printf("%d", el);
        // ol--;
        el--;
    }
    
    if (ol)
    {
        printf("%d", ol);
        ol--;
        while (ol){
            t += o[--ol];
        printf("%d", ol);}
        
    }
    else if (el)
    {
        printf("%d", el);
        el--;
        while (el){
            t += e[--el];
            printf("%d", el);}
    }
    printf("%d", t);
    return 0;
}
