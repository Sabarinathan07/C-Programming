#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("enter a no:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
        printf("\n rem %d",rem);
	    rev=rev*10+rem;
        printf("\n rev %d",rev);
	    n=n/10;
        printf("\n rev %d",n);
	}
	printf("\n \n reverse is:%d",rev);
	return 0;
	}