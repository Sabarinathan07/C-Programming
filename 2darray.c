#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter array elements");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("2D ARRAY :\n");
    for(int i=0;i<3;i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}