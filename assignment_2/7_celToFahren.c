#include<stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("\n Enter the celsius");
    scanf("%f",&celsius);
    fahrenheit =  ((celsius*9)/5)+32;
    printf("\n Temperature in fahrenheit is %f \n ",fahrenheit);
    return 0;

}