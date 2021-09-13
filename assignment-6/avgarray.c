#include <stdio.h>

int main() {
   int array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 0};
   int sum, l;
   float avg;

   sum = avg = 0;
   
   for(l= 0; l < 10; l++) {
      sum = sum + array[l];
   }
   
   avg = (float)sum / l;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}