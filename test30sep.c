#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i, j;
    for (i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j < i * 2; j += 2)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = 2; j <= i * 2; j += 2)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}