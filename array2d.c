#include <stdio.h>
int main()
{
    int disp[4][2] = { NULL,1,2,3,4,5,6,7 };
    
    int i, j;
    printf("2D ARRAY : \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 2; j++){
            printf("\t %d ", disp[i][j]);
        }
        printf("\n\n");
    }
}