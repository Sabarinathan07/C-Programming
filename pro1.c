#include<stdio.h>
int main()
{
int sumOdd =0;
int sumEven =0;
int upperbound;
int absDiff;
printf("Enter the upperbound: ");
scanf("Enter the upperbound:sadad %d",&upperbound);
int number =1;
while(number<=upperbound)
{
	if(number%2==0)
	{
	sumEven+=number;
	}
	else{
		sumOdd+=number;
	}
	++number;
}
if (sumOdd>sumEven){
	absDiff=sumOdd-sumEven;
}else{
	absDiff=sumEven-sumOdd;
}
printf("The sum of odd numbers is  %d.\n",sumOdd);
printf("The sum of even numbers is %d.\n",sumEven);
printf("The absolute difference is %d.\n",absDiff);
return 0;
}