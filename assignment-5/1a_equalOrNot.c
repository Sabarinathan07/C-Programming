#include<stdio.h>
int main(){
    int n1, n2;
    printf("\n  Enter your Number1 and Number2 to check whether they are equal: ");
    scanf("%d%d", &n1,&n2);
    if(n1==n2){
        printf("\n  The number1 %d and number2 %d are equal \n\n", n1, n2);

    }else{
        printf("\n The number %d and number %d are not equal \n\n ", n1, n2);

    }
}
