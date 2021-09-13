
#include <stdio.h>
 
int main()
{
   int a=20,b=5, add,sub,mul,div,mod,incre,decre;
   add = a+b;
   sub = a-b;
   mul = a*b;
   div = a/b;
   mod = a%b;
   incre = ++a;
   decre = --a;
   printf("Addition of a, b is : %d\n", add);
   printf("Subtraction of a, b is : %d\n", sub);
   printf("Multiplication of a, b is : %d\n", mul);
   printf("Division of a, b is : %d\n", div);
   printf("Modulus of a, b is : %d\n", mod);
   printf("Increment of a is %d \n",incre);
   printf("Decrement of a is %d \n",decre);
    return 0;
}