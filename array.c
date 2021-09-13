#include <stdio.h>
int main()
{
    int i = 0;
    int marks[5];  
    marks[0] = 80; //initialization of array
    marks[1] = 60;
    marks[2] = 70;
    marks[3] = 85;
    marks[4] = 75;


    printf("%d \n",marks[2]);

    for (i = 0; i < 5; i++)
    {
        printf("%d \n", marks[i]);
    } 

    
    // // while(i<5){
    // //     printf("%d \n", marks[i]);
    // //     i++;
    // // }
    // marks[3] = 185;
    // // printf("The index 2 elment is changed");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d \n", marks[i]);
    // } 
   
    return 0;
}