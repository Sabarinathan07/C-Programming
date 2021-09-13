#include<stdio.h>
int main(){
    int a[20][20], n,m, i, j;
    printf("Enter the row size of Array: ");
    scanf("%d", &n);
    printf("Enter the coloumn size of Array: ");
    scanf("%d", &m);
    printf("Enter the Array Elements : \n");
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            scanf("%d", *(a + i) + j);
        }
    }
    printf("\n Entered Elements : \n");
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            printf("%d\n", *(*(a + i) + j));
        }
    }
}