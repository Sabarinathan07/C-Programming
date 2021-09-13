#include <stdio.h>
int main(int argc,char *argv[])
{
int num, num1, arms=0,rem;
if(argc != 2)
  {printf("Enter the number:\n");
    scanf("%d", & num);}
else{
            num = atoi (argv[1]);
          
  }
    num1 = num;
    while (num > 0)
    
  {
          rem = num % 10;
          arms = arms + rem * rem * rem;
          num = num / 10;
        
  }
    if(num1 == arms)
    
  {
          printf (" \n%d is an Armstrong number", num1);
        
  }
    else     
  {
          printf ("\n%d is NOT an Armstrong number", num1);
        
  }
}