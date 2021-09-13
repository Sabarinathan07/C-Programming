#include<stdio.h>

int main(){
    float x1,y1,x2,y2,slpoe,midX,midY;
    printf("\n Enter the co ordinate x1 and y1 : ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the co ordinate x2 and y3 : ");
    scanf("%f %f", &x2, &y2);

    midX = (x1 + x2)/2;
    midY = (y1 + y2)/2;
    slpoe = (y2 - y1)/(x2 - x1);

    printf("Midpoint = (%f, %f)", midX,midY);
    printf("\n Slope = %f \n",slpoe);

    return 0;
}