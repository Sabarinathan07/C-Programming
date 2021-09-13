#include  <stdio.h>
int main()
{
    int i, num;
    float sum = 0.0, avg;
    printf ("Enter the value of N \n");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d numbers \n", num); 
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    } 
    printf("Input array elements \n"); 
    for (i = 0; i < num; i++)
    {
        printf("%+3d\n", array[i]);
    }
    for (i = 0; i < num; i++)
    {
        sum+=array[i];
    }
 
    avg = sum / num;
 
    printf("\n Sum of all numbers =  %.2f\n", sum);
 
    printf("\n Average of all input numbers =  %.2f\n", avg);
 
}