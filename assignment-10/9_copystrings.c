#include <stdio.h>
void copy_string(char *, char *);
int main()
{
    char source[100], target[100];
    printf("Enter source string\n");
    // gets(source);
    scanf("%[^\n]s", source);
    copy_string(target, source);
    printf("Target string is \"%s\"\n", target);
    return 0;
}
void copy_string(char *target, char *source)
{
    while (*source)
    {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}