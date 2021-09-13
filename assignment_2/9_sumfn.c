#include<stdio.h>
int main(){
    int a;
    double b;
    float c;
    printf("Enter three numbers a, b and c : ");
    scanf(" %d %lf %f", &a, &b, &c);
    printf("Three different data types number are %d %lf %e ", a, b, c);
    float sum = a - (-b) - (-c);
    printf("\n The sum of three different data types and without using + operator is %f \n",sum);

    return 0;
}
