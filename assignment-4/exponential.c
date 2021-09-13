# include <stdio.h>
# include <conio.h>
void main() 
{ 
 int i, n, exp; 
 float x, sum = 1, t = 1 ; 
 clrscr() ; 
 printf("Enter the value for x : ") ; 
 scanf("%f", &x) ; 
 printf("\nEnter the value for n : ") ; 
 scanf("%d", &n) ; 
 for(i = 1 ; i < n + 1 ; i++) 
 { 
  exp = i ; 
  t = t * x / exp ; 
  sum = sum + t ; 
 } 
 printf("\nExponential Value of %f is : %8.4f", x, sum) ; 
 getch() ; 
}
