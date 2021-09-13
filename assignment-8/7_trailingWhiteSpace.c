#include <stdio.h>
#define MAX_SIZE 100 
void trimTrailing(char * str);
int main()
{
    char str[MAX_SIZE];
    printf("Enter any string: ");
    gets(str);
    printf("\nString before trimming trailing white space: \n'%s'", str);
    trimTrailing(str);
    printf("\n\nString after trimming trailing white spaces: \n'%s'", str);
    return 0;
}
void trimTrailing(char * str)
{
    int index, i;
    index = -1;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }
        i++;
    }
    str[index + 1] = '\0';
}
