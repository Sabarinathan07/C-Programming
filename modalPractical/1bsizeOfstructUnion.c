#include <stdio.h>
#include <string.h>
struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};
union union_example
{
	int integer;
	float decimal;
	char name[10];
};

int main()
{
	struct struct_example s={18,38,"sabari"};
	union union_example u={18,38,"sabari"};
	printf("\nsizeof structure : %lu\n", sizeof(s));
	printf("sizeof union : %lu\n", sizeof(u));
    return 0;
}
