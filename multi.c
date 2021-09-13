#include<stdio.h>

int main(){
    int n, row;
    printf("Enter the multiplication number");
    scanf("%d", &n);
    printf("Enter the rows");
    scanf("%d", &row);
    for (int i = 1; i <= n ;i++){
        printf("%d X %d = %d\n", n, i, n * i);

    }
}