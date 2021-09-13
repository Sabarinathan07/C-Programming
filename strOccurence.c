#include <stdio.h>
#include <string.h>
char str[100], sub[100];
int count = 0, count1 = 0;
int main()
{
    int i, j, length1, length2;
    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);
    length1 = strlen(str);
    printf("\nEnter a char to find the number of occurence : ");
    scanf(" %[^\n]s", sub); 
    length2 = strlen(sub); 
    for (i = 0; i < length1;)
    {
        j = 0;
        count = 0;
        while (str[i] == sub[j])
        {
            count++;
            i++;
            j++;
        }
        if (count == length2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);
}