#include <stdio.h>
 
int main() {
    char c;
    printf("Enter a Character\n");
    scanf("%c",&c);
    printf("The consective three character %c %c %c", c, c + 1, c + 2);
    return 0;
}