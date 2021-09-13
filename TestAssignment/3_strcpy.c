#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];

    printf("Enter a String : ");
    gets(str1);

    
    strcpy(str2, str1);
    printf("The entered string is : ");
    puts(str2); 

    return 0;
}