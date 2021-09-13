#include <stdio.h>
// int swap(int);
int swap(int x,int y)
{
	//int z;
	x=x+y;
	y=x-y;
	x=x-y;
    printf("after swapping the value of x & y is:%d, %d", x, y);
	return 0;
}   
int main() 
{ 
    int a,b; 
    printf("Enter Value of a "); 
    scanf("%d", &a); 
    printf("\nEnter Value of b "); 
    scanf("%d", &b); 
    swap(a,b); 
    return 0; 
}