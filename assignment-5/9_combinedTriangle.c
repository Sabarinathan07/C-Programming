#include<stdio.h>
void pattern(int n)
{
	int i,j;
	//upper part
	for (i=1; i<=n; i++)
	{	
		
		for (j=1; j<=(2*n); j++)
		{
			//left side
			if (i<j)
				printf(" ");
			else
				printf("%d",j);
			//right side
			if (i<=((2*n)-j))
				printf(" ");
			else
				printf("%d",j);
		}
		printf("\n");
	}
	//lower part
	for (i=1; i<=n; i++)
	{
		for (j=1;j<=(2*n);j++)
		{
			//left side
			if (i>(n-j+1)){
				printf(" ");
			}
			else{
				printf("%d",j);
			}
			//right side
			if ((i+n)>j)
				printf(" ");
			else
				printf("%d",j);
		}
		printf("\n");
	}
}
int main()
{
	pattern(4);
	return 0;
}
