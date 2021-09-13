#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter the number of elements in array :");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d numbers : ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    int *p = &array[0];
    printf("Printing Array using Pointer");
    for (i = 0; i < 5; i++)
        printf("\nArray[%d] is %d ", i, *(p + i));
    return 0;
}