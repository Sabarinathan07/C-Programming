#include <stdio.h>

int main(){
    int num,fact=1;
    printf("Enter a number to find factorial");
    scanf("%d", &num);
    for (int i = 1; i <= num;i++){
        fact = fact * i;
    }
    printf("%d \n\n ", fact);
    int n;
    scanf("%d", &n);
    

    return 0;
}