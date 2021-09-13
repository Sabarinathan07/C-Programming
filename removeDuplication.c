#include <stdio.h>
int main()
{
    int arr[20], i, j, k, size;
    printf("Enter array size");
    scanf("%d", &size);
    printf("Enter numbers ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = 1 + i; j < size;)
        {
            if (arr[j] == arr[i])
            {
                for (k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
            j++;
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}