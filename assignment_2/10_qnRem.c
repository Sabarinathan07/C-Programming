#include<stdio.h>
int main(){
    int dividend, divisor, quotient, remainder;

    printf("Enter the Dividend and Divisor : ");
    scanf("%d %d",&dividend,&divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("\n The qoutient is %d ",quotient);
    printf("\n The remainder is %d \n ",remainder);

    return 0;

}
