#include <stdio.h>

int main() {
   int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
   int sum, l;

   sum = 0;
   
   for(l = 9; l >= 0; l--) {
      sum = sum + array[l];      
   }

   printf("Sum of array is %d.", sum);   

   return 0;
}