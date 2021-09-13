#include<stdio.h>
int main(){
    int arr1[3] = {2,4,6};
    int arr2[3] = {1, 3, 5};
    int *p1, *p2;
    int temp;
    for (int i = 0; i < 3;i++){
        p1 = &arr1[i];
        p2 = &arr2[i];
        temp = *p1;
        *p1 = *p2;
        *p1 = temp;
    }
    for (int i = 0; i < 3;i++){
        printf("\n%d\t", arr1[i]);
    }
    for (int i = 0; i < 3;i++){
        printf("\n%d\t", arr2[i]);
    }
}