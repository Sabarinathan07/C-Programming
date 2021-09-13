#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter an alphabet:");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
		case 'a':
			printf("Alphabet a is a vowel.\n");
			break;
		case 'e':
			printf("Alphabet e is a vowel.\n");
			break;
		case 'i':
			printf("Alphabet i is a vowel.\n");
			break;
		case 'o':
			printf("Alphabet o is a vowel.\n");
			break;
		case 'u':
			printf("Alphabet u is a vowel.\n");
			break;
		default:
			printf("you entered a consonant.\n");
	}
	return 0;
}
