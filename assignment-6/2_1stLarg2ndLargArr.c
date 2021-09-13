#include <stdio.h>
int main ()
{
    int n = 0, i = 0, largest1 = 0, largest2 = 0, num = 0;
    printf ("Enter the size of the array\n");
    scanf ("%d", &n);
    int array[n];
    printf ("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &array[i]);
    }
    printf ("The array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf ("%d\t", array[i]);
    }
    printf ("\n");
    largest1 = array[0];
    largest2 = array[1];
    if (largest1 < largest2)
    {
        num = largest1;
        largest1 = largest2;
        largest2 = num;   
        }
    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }
    printf ("The FIRST largest number = %d\n", largest1);
    printf ("THE SECOND largest number = %d\n", largest2);
    return 0;
}