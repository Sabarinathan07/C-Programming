#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	if (n < 0)
		printf("Number is negative");
	else if (n > 0)
		printf("Number is positive");
	else
		printf("Number is equal to zero");
	return 0;
}
