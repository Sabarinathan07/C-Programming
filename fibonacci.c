#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1;
    int fiboNum = t1 + t2;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", fiboNum);
        t1 = t2;
        t2 = fiboNum;
        fiboNum = t1 + t2;
    }

    return 0;
}