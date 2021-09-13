#include <stdio.h>
int main()
{
    int i, n;
    int even_terms = 0, odd_terms = 0;
    printf("Enter the max number in a list");
    scanf("%d", &n);
    int a[n];
    printf("Elements in the list");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_terms++;
        }
        else
        {
            odd_terms++;
        }
    }
    printf("\n Number of even terms in thelist:%d", even_terms);
    printf("\n Number of odd termsin thelist:%d", odd_terms);
    return 0;
}