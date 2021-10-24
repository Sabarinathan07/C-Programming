#include <stdio.h>
int main()
{
    int i, j, a, n;

    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (array[i] > array[j])
            {

                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
 
        }

        // for(i = 0; i < n;i+=2){
        //     int temp;
        //     temp = array[i];
        //     array[i] = array[i + 1];
        //     array[i] = temp;
        // }
        i = 0;
        while (i < n)
        {
            int temp;
            temp = array[i];
            array[i] = array[i + 1];
            array[i=1] = temp;
            i = i + 2;
        }
            for (i = 0; i < n; i++)
                printf("%d\n", array[i]);

        return 0;
}