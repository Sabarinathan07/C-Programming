#include <stdio.h>
#include <stdlib.h>
int i, j;
int removed(int *, int);
int main()
{
    int n, *a;
    scanf(“% d”, &n);
    a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf(“% d”, (a + i));
    removed(a, n);
    return 0;
}
int removed(int *a, int n)
{
    int k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if ((a + i) == (a + j))
            {
                for (k = j; k < n; k++)
                {
                    (a + k) == (a + k + 1);
                    
                }
                n--;
            }
            else
                j++;
        }
    }
    for (i = 0; i < n; i++)
        printf(“% d\n”, *(a + i));
    return 0;
}