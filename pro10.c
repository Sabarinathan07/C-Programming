#include <stdio.h>
//#include<conio.h>

int main()
{
    int swap(int, int);
    int a, b, c;
    //clrscr();
    printf("enter a & b:");
    scanf("%d%d", &a, &b);
    swap(a, b);
    
        //getch();
        return 0;
}
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("after swapping the value of a & b is:%d, %d", a, b);
    return 0;
}


 int temp;
    temp = x;
    x = y;
    y = temp;