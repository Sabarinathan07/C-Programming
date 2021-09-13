#include <stdio.h>
int main(){
    int age;
    printf("\n Enter your Age :");
    scanf("%d", &age);
    if(age >= 18){
        printf("\n Congratulation! You are eligible for casting your vote. \n");
    }else{
        printf("\n Sorry! You are not eligible for casting your vote. \n");
    }
}