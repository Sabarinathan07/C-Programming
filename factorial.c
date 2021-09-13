#include <stdio.h>
int main() {
    int n, i = 1 ;
    unsigned long long fact = 1;
    printf("Enter an num to find the factorial : ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial doesn't exist!");
    else {
       
        while(i<=n){
            fact *= i;
            i++;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}