#include<stdio.h>
int main()
{
    int org[10][10],trans[10][10],row,col,flag = 1 ;
    printf("\n Enter the number of rows and columns :");
    scanf("%d %d",&row,&col);
    printf("\n Enter matrix elements:");
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("Enter element for %d %d:",i+1,j+1);
            scanf("%d",&org[i][j]);
        }
    }
    printf("\nEntered matrix: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j) 
        {
            printf("%d \t", org[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            trans[j][i]=org[i][j];
        }
    }
    printf("\n TRANSPOSED MATRIX: \n");
    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            printf("%d \t", trans[i][j]);
        }
    printf("\n");
    }
    for (int i = 0; i < row; i++) 
            {
                for (int j = 0; j < col; j++)
                {
                    if (org[i][j] == trans[i][j])
                    {
                        flag = 0;
                        
                    }
                 }
            }
            
    if(flag == 0)
    {
        printf("\n Matrix is symmetric");
    }
    else
    {
        printf("\n Matrix is not symmetric");
    }
    return 0;
}