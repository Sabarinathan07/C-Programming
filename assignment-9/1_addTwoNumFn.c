#include<stdio.h>
 
int sum(int num1, int num2) {
   int sum;
   sum = num1 + num2;
   return (sum);
}

int main() {
   int num1, num2, res;
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
   res = sum(num1, num2);
   printf("Addition of two number is : %d\n\n",res);
   return (0);
}

