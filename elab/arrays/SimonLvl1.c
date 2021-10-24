#include <stdio.h>
#include <string.h>
void kSmallestPair(int arr1[], int n1, int arr2[],int n2,int k);
int main()
{
    int n1,n2;
    int k,i;
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
    
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    
    scanf("%d",&k);
    kSmallestPair( a1, n1, a2, n2, k);
 
    return 0;
}
void kSmallestPair(int arr1[], int n1, int arr2[],int n2, int k){

 
    int index2[n1];
    memset(index2, 0, sizeof(index2));
    while(k--) {
        int min_sum = 99999;
        int min_index = 0,i1;
        for (i1 = 0; i1 < n1; i1++)
        
            if (index2[i1] < n2 &&
                arr1[i1] + arr2[index2[i1]] <=  min_sum) {
                min_index = i1;
                min_sum = arr1[i1] + arr2[index2[i1]]; }
        
        printf("(%d,%d) ",arr1[min_index],arr2[index2[min_index]]);
        index2[min_index]++;
    }
}