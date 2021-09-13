#include<stdio.h>
int main(){
    int num;
    printf("\n Enter a number : ");
    scanf("%d", &num);
    if(num%2==0){
        printf("\n %d is an even integer ",num);
    }else{
        printf("\n %d is an odd integer ",num);
    }
}