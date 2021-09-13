#include<stdio.h>
long int recursion(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, recursion(n));
    return 0;
}

long int recursion(int n) {
    if (n>=1)
        return n * recursion(n-1);
    else
        return 1;
}
