 #include <stdio.h>
int main()
{
    int a[100],i,n,k;   
    printf("Enter size of the  array :\n ");
    scanf("%d", &n);
    printf("Enter elements in array :\n ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the search element :\n ");
     scanf("%d", &k);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
			printf("Element %d found ",k);
            return 0;		 
        }
 
    }
    
	printf("Element %d not  found",k);
}