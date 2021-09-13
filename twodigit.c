#include<stdio.h>

int main(){
    int n,len=0;
    scanf("%d", &n);
    while(n!=0){
        n /= 10;
        len++;
    }
    if(len<=2){
        printf("yes");
    }else{
        printf("no");
    }
}
