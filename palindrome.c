#include <stdio.h>
int main() {
    int n, rev = 0, rem, num;
    float a, b, c;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (num == rev)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);

    return 0;
}